#include<stdio.h>
void enqueue(int *rear,int *front,int room,int arr[])
{
	if(*front == -1 && *rear == -1)
	{
		*front = *front + 1;
		*rear = *rear + 1;

	}
	else 
		*rear = *rear + 1;
	arr[*rear] = room;

}

int dequeue(int *rear,int *front,int arr[])
{
	if(*front == *rear)
	{
		*front = -1;
		*rear = -1;

	}
	else
		*front = *front + 1;


}

int frontelement(int *front,int arr[])
{
	return arr[*front];

}
int empty(int *front,int *rear)
{
	if(*front == -1 && *rear == -1)
	{
		return 1;

	}
	else
	{
		return 0;

	}

}
int main()
{
	struct queue{
		char roll[14];
		int room;

	};	
	int front = -1,rear = -1,n,t,i;
	struct queue array[10000];
	int arr[10000];
	int check=0,element;
	scanf("%d %d",&n,&t);
	for(i=0;i<n;i++)
	{
		scanf("%s %d",array[i].roll,&array[i].room);

	}
	while(t--)
	{
		for(i=0;i<n;i++)
		{
			if(array[i].room == check)
			{
				enqueue(&rear,&front,i,arr);

			}

		}
		check++;

	}
	while(empty(&front,&rear)!=1)
	{
		element = frontelement(&front,arr);
		printf("%s\n",array[element].roll);
		dequeue(&rear,&front,arr);

	}
	return 0;

}
