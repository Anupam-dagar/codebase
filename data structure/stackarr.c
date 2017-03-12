#include<stdio.h>
int size = 10;
int top = -1;
int items[100];
int empty(int top)
{
	if(top == -1)
	{
		return 1;
	}
	else 
		return 0;
}
int full(int top)
{
	if(top == size -1)
	{
			return 1;
	}
	else 
		return 0;
}
int push(int items[],int i)
{
	if(full(top))
	{
        }
	else 
	{
		items[++top] = i;
		return 1;
	}
}
int pop(int items[])
{
	if(empty(top))
	{
	}
	else
	{
		top--;
		return 1;
	}
}
int stacktop()
{
	printf("%d\n",items[top]);
}
int main()
{
	int i,choice,element;
	printf("Array implementation of stack.\nSize of stack is 10\n\n");
	while(i)
	{
		printf("Choose an option:\n");
		printf("1.Push\n2.Pop\n3.Top Element\n4.Stack Status\n5.Print Stack\n6.Exit\n");
		scanf("%d",&choice);
		printf("\n");
		switch(choice)
		{
			case 1:
				if(!full(top))
				{
				printf("Enter element to push:\n");
				scanf("%d",&element);
			       	push(items,element);
				}
				else if(full(top))
				{
					printf("overflow\n");
				}
				printf("\n");
				break;
			case 2:	if(!empty(top))
				{
				pop(items);
				printf("Element popped\n");
				}
				else if(empty(top))
				{
					printf("underflow\n");
				}
				printf("\n");
				break;
			case 3:	printf("Top element is %d\n",stacktop());
		   		printf("\n");
				break;
			case 4: if(empty(top))
				{}
				else if(full(top))
				{}
				else
					printf("stack is partially filled\n");
				printf("\n");
				break;
			case 5: if(!empty(top))
				{
					printf("stack is ");
				for(i=0;i<=top;i++)
				{
					printf("%d ",items[i]);
				}
				printf("\n");
				}
				else if(empty(top))
				{
					printf("stack is empty\n");
				}
				printf("\n");
				break;
			case 6: printf("Exiting....\n");
				break;	
			default : printf("invalid input\n");	
		}
		if(choice == 6)
		{
			break;
		}
	}
	return 0;
}
