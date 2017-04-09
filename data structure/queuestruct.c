#include<stdio.h>
#include<stdlib.h>
struct queue{
	int front;
	int rear;
	int *itemsarr;
	int size;
	int elementcount;
};

struct queue* createqueue(int size)
{
	struct queue *q;
	q = (struct queue*)malloc(sizeof(struct queue));
	q->front = 0;
	q->rear = -1;
	q->size = size;
	q->itemsarr = (int*)malloc(q->size * sizeof(int));
	q->elementcount = 0;
	return q;
}

int full(struct queue *q)
{
	if(q->elementcount == q->size)
	{
		printf("Queue is full\n");
		return 1;
	}
	else 
		return 0;
}

int empty(struct queue *q)
{
	if(q->elementcount == 0)
	{
		printf("Queue is empty\n");
		return 1;
	}
	else 
		return 0;
}

void enqueue(struct queue *q,int num)
{
	if(!full(q))
	{
		if(q->rear == q->size - 1)
		{
			q->rear = -1;
		}
		q->rear = q->rear + 1;
		q->itemsarr[q->rear] = num;
		q->elementcount = q->elementcount + 1;
	}
}
int dequeue(struct queue *q)
{
	int data;
	if(!empty(q))
	{
		data = q->itemsarr[q->front];
		if(q->front == q->size)
		{
			q->front = 0; 
		}
		q->front = q->front + 1;
		q->elementcount = q->elementcount - 1;
		return data;
	}
}

int frontelement(struct queue *q)
{
	return q->itemsarr[q->front];
}

int rearelement(struct queue *q)
{
	return q->itemsarr[q->rear];
}

int main()
{
	struct queue *q;
	int i,noofelements,option,element;
	printf("Declare size of queue\nEnter a value\n");
	scanf("%d",&noofelements);
	q = createqueue(noofelements);
	while(1)
	{
		printf("Select an option:\n");
		printf("1.Enqueue\n2.Dequeue\n3.Queue status\n4.Print Queue\n5.Front Element\n6.Rear Element\n7.Exit\n");
		scanf("%d",&option);
		switch(option)
		{
			case 1: if(full(q))
				{}
				else 
				{
					printf("Enter element to enqueue:\n");
					scanf("%d",&element);
						enqueue(q,element);
				}
				break;
			case 2: if(empty(q))
				{}
				else
				{
					dequeue(q);
				}
				break;
			case 3: if(empty(q))
				{}
				else if(full(q))
				{}
				else 
					printf("Queue is partially filled\n");
				break;
			case 4: if(empty(q))
				{}
				else
				{
					for(i=q->front;i<=q->rear;i++)
					{
						printf("%d ",q->itemsarr[i]);
					}
				}
				break;
			case 5: if(empty(q))
				{}
				else 
				{
					printf("%d is the front element\n",frontelement(q));
				}
				break;
			case 6: if(empty(q))
				{}
				else
				{
					printf("%d is the rear element\n",rearelement(q));
				}
				break;
			case 7: printf("Exiting....\n");
				break;
			default: printf("Please enter a valid input\n");
			         break;	

		}
		if(option == 7)
		{
			break;
		}
	}
	return 0;
}
