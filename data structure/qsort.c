#include<stdio.h>
int partition(int arr[],int low,int high)
{
	int pivot,left,current,temp;
	pivot = high;
	left = low;
	for(current = low;current < high;current++)
		{
			if(arr[current] <= arr[pivot])
			{
				temp = arr[current];
				arr[current] = arr[left];
				arr[left] = temp;
				left++;
			}
		}
		temp = arr[left];
		arr[left] = arr[pivot];
		arr[pivot] = temp;
		return left;
}
void quicksort(int arr[],int low,int high)
{
	int p;
	if(low<high)
	{
		p = partition(arr,low,high);
		quicksort(arr,low,p-1);
		quicksort(arr,p+1,high);
	}
}
int main()
{
	int arr[100],i,n;
	printf("enter no. of elements in array\n");
	scanf("%d",&n);
	printf("Input an array\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	quicksort(arr,0,n-1);
	printf("Sorted array is: ");
	for(i = 0;i<n;i++)
	{
		printf("%d ",arr[i]);
	}
	return 0;
}
