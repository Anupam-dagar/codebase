#include<stdio.h>
#include<stdlib.h>
struct node{
	int data;
	struct node *next;
};

void insertbegin(struct node **head,int data)
{
	struct node *newnode;
	newnode = (struct node *)malloc(sizeof(struct node));
	newnode->data = data;
	newnode->next = *head;
	*head = newnode;
}

void insertafter(struct node *nodebefore,int data)
{
	if(nodebefore = NULL)
	{
		printf("can't insert after NULL node\n");
	}
	else
	{
		struct node *newnode;
		newnode = (struct node *)malloc(sizeof(struct node));
		newnode->data = data;
		newnode->next = nodebefore->next;
		nodebefore->next = newnode;
	}
}

void insertend(struct node **head,int data)
{
	struct node *newnode;
	struct node *lastnode;
	lastnode = *head;
	newnode = (struct node *)malloc(sizeof(struct node));
	newnode->data = data;
	newnode->next = NULL;
	if(*head == NULL)
	{
		*head = newnode;
	}
	else 
	{
		while(lastnode->next != NULL)
		{
			lastnode = lastnode->next;
		}
		lastnode->next = newnode;
	}
}

void deletenodevalue(struct node **head,int value)
{
	struct node *temp;
	temp = *head;
	struct node *prev;
	if(temp != NULL && temp->data == value)
	{
		*head = temp->next;
		free(temp);
	}
	if(temp == NULL || temp->data != value)
		return;
	else
	{
		while(temp != NULL && temp->data != value)
		{
			prev = temp;
			temp = temp->next;
		}
		prev->next = temp->next;
		free(temp);
	}
}

void deletenodeposition(struct node **head,int position)
{
	int i;
	struct node *temp;
	struct node *nodeafterpos;
	temp = *head;
	struct node *prev;
	if(position == 0)
	{
		*head = temp->next;
		free(temp);
	}
	
	for(i=0; temp!=NULL && i<position-1;i++)
	{
		temp = temp->next;
	}
	if(temp == NULL || temp->next == NULL)
	       return;	
	nodeafterpos = temp->next->next;
	free(temp->next);
	temp->next = nodeafterpos;
}

void printlist(struct node *node)
{
	while(node != NULL)
	{
		printf("%d -> ",node->data);
		node = node->next;
	}
}

int noofelements(struct node *head)
{
	int count=0;
	while(head != NULL)
	{
		head = head->next;
		count++;
	}
	printf("%d\n",count);
	return count;
}
int main()
{
	struct node *head = NULL;
	struct node *printpointer;
	printpointer = head;
	printf("Linked List\n");
	int choice,element;
	while(1)
	{
		printf("Select a valid option:\n");
		printf("1.Insert element in start.\n2.Insert element at end.\n3.Insert after given node.\n4.Delete a node with given value.\n5.Delete a node at a given position.\n6.Print list.\n7.No. of elements.\n8.Exit.\n");
		scanf("%d",&choice);
		printf("\n");
		switch(choice)
		{
			case 1: printf("Enter element to insert.\n");
				scanf("%d",&element);
				printf("\n");
				insertbegin(&head,element);
				break;
			case 2: printf("Enter element to insert.\n");
				scanf("%d",&element);
				printf("\n");
				insertend(&head,element);
				break;
				//		case 3: printf("Enter a node.\n");
			case 4: printf("Enter a value:\n");
				scanf("%d",&element);
				printf("\n");
				deletenodevalue(&head,element);
				break;
			case 5: printf("Enter a position:\n");
				scanf("%d",&element);
				printf("\n");
				deletenodeposition(&head,element);
				break;
			case 6: printlist(head);
				printf("\n\n");
				break;
			case 7: noofelements(head);
				printf("\n");
				break;
			case 8: printf("Exiting....\n");
				break;
			default: printf("Enter a valid option.\n");
		}
		if(choice == 8)
		{
			break;
		}
	}
	return 0;
}
