#include<stdio.h>
void merge(int array[],int low1,int low2,int high1,int high2)
{
	int temp[100];
	int i,j,k;
	i = low1;
	j = low2;
	k = 0;
	while(i <= high1 && j <= high2)
	{
		if(array[i] < array[j])
		{
			temp[k++] = array[i++];
		}
		else 
			temp[k++] = array[j++];
	}
	while(i <= high1)
	{
		temp[k++] = array[i++];
	}	
	while(j <= high2)
	{
		temp[k++] = array[j++];
	}
	for(i=low1,j=0;i<=high2;i++,j++)
	{
		array[i] = temp[j];
	}
}

void mergesort(int array[],int low,int high)
{
	int mid;
	if(low<high)
	{
	mid = (low+high)/2;
	mergesort(array,low,mid);
	mergesort(array,mid+1,high);
	merge(array,low,mid+1,mid,high);
	}
}

int main()
{
	int array[100];
	int size,i;
	printf("enter no. of elements\n");
	scanf("%d",&size);
	printf("Input an array:\n");
	for(i=0;i<size;i++)
	{
		scanf("%d",&array[i]);
	}
	mergesort(array,0,size-1);
	printf("Sorted array is: ");
	for(i=0;i<size;i++)
	{
		printf("%d ",array[i]);
	}
	return 0;
}
