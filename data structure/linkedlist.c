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
		return;
	}
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
	printf("\n");
}

int noofelements(struct node *head)
{
	int count=0;
	while(head != NULL)
	{
		head = head->next;
		count++;
	}
	return count;
}

int middleelement(struct node *head)
{
	struct node *p = head;
	int mid = noofelements(head)/2;
	int i;
	for(i=0;i<mid;i++)
	{
		p = p->next;
	}
	return p->data;
}

int integerrepetition(struct node *head,int num)
{
	struct node *p;
	p = head;
	int count = 0;
	while(p!=NULL)
	{
		if(p->data == num)
		{
			count++;
		}
		p = p->next;
	}
	return count;
}

int search(struct node *head,int number)
{
	struct node *p;
	p = head;
	int count = 0;
	while(p!=NULL)
	{
		if(p->data == number)
		{
			break;
		}
		count++;
		p = p->next;
	}
	return count;
}

void reverse(struct node** head_ref)
{
	struct node* prev   = NULL;
	struct node* current = *head_ref;
	struct node* next;
	while (current != NULL)
	{
		next  = current->next;  
		current->next = prev;   
		prev = current;
		current = next;

	}
	*head_ref = prev;

}

int main()
{
	struct node *head = NULL;
	struct node *printpointer;
	printpointer = head;
	printf("Linked List\n");
	int choice,element,store;
	while(1)
	{
		printf("Select a valid option:\n");
		printf("1.Insert element in start.\n2.Insert element at end.\n3.Insert after given node.\n4.Delete a node with given value.\n5.Delete a node at a given position.\n6.No. of elements.\n7.Middle Element\n8.No. of times given integer is repeted.\n9.Search for a number.\n10.Reverse the linked list.\n11.Print List.\n12.Exit.\n");
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
			case 6: store = noofelements(head);
				printf("no of elements in list is %d\n",store);
				printf("\n");
				break;
			case 7: element = middleelement(head);
				printf("%d is the middle element\n\n",element);
				break;
			case 8: printf("Enter number to be checked:\n");
				scanf("%d",&element);
				printf("\n");
				store = integerrepetition(head,element);
				printf("%d is repeated %d times\n\n",element,store);
				break;
			case 9:printf("Enter no.to search:\n");
				scanf("%d",&element);
			       	printf("\n");
				store = search(head,element);
				printf("%d is found at %d index\n\n",element,store);
				break;
			case 10:reverse(&head);
				printf("List is changed to  ");
				printlist(head);
				printf("\n");
				break;
			case 11:printlist(head);
				printf("\n");
				break;
			case 12:printf("Exiting...\n");
				break;
			default: printf("Enter a valid option.\n");
		}
		if(choice == 12)
		{
			break;
		}
	}
	return 0;
}
