#include<stdio.h>
#include<stdlib.h>
struct stack{
	int top;
	int capacity;
	int *array;
};
struct stack* createstack(int capacity)
{
	struct stack *s;
	s = (struct stack *)malloc(sizeof(struct stack));
	s->capacity = capacity;
	s->top = -1;
	s->array = (int *)malloc(s-> capacity * sizeof(int));
	return s;
}

int full(struct stack *s)
{
	if(s->top == s->capacity-1)
	{
		printf("stack is full\n");
		return 1;
	}
	else 
		return 0;
}

int empty(struct stack *s)
{
	if(s->top == -1)
	{
		printf("stack is empty\n");
		return 1;
	}
	else 
		return 0;
}

void push(struct stack *s,int num)
{
	if(!full(s))
	{
		s->array[++(s->top)] = num;

	}
}

int pop(struct stack *s)
{
	int data;
	if(!empty(s))
	{
		data = s->array[s->top];
		s->top--;
	}
	return data;
}

int stacktop(struct stack *s)
{
	int data;
	data = s->array[s->top];
	return data;
}
int main()
{
	printf("structure implementation of stack\n");
	int i,choice,element,size;
	struct stack *s;
	printf("Enter the capacity of stack\n");
	scanf("%d",&size);
	s = createstack(size);

	while(1)
	{
		printf("Select an option:\n");
		printf("1.Push\n2.Pop\n3.Stack Status\n4.Print Stack\n5.Stacktop\n6.Exit\n");
		scanf("%d",&choice);
		switch(choice)
		{
			case 1: if(full(s))
				{}
				else
				{
					printf("Enter element to push\n");
					scanf("%d",&element);
					push(s,element);	
				}
				break;
			case 2: if(empty(s))
				{}
				else
				{
					printf("Element %d popped\n",pop(s));
				}
				break;
			case 3: if(empty(s))
				{}
				else if(full(s))
				{}
				else 
					printf("stack is partially filled\n");
				break;
			case 4: if(empty(s))
				{}
				else
				{
					for(i=0;i<=s->top;i++)
					{
						printf("%d ",s->array[i]);
					}
				}
				break;
			case 5: if(empty(s))
				{}
				else
				printf("%d is the top element\n",stacktop(s));
				break;
			case 6: printf("Exiting....\n");
				break;
		}
		if(choice == 6)
		{
			break;
		}
	}
	return 0;
}
