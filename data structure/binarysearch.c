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


void search(int array[],int low,int high,int number)
{
	int mid;
	mid = (low + high)/2;
	while(low<=high)
	{	if(array[mid] == number)
		{
			printf("element found at position %d\n",mid);
			break;
		}
		else if(number < array[mid])
		{
			high = mid - 1;
			mid = (low + high)/2;
		}
		else if(number > array[mid])
		{
			low = mid + 1;
			mid = (low + high)/2;
		}
	}
}

int main()
{
	int i,number,size,array[100];
	printf("Following program will use binary search to search for an element in an array\n");
	printf("Array can be sorted or unsorted.\nIn case you enter an unsorted array,it will first sort it and then search in it.\n");
	printf("Enter no. of elements in the array:\n");
		scanf("%d",&size);
	printf("Enter array elements\n");
	for(i=0;i<size;i++)
	{
		scanf("%d",&array[i]);
	}
	printf("Enter no. to search:\n");
	scanf("%d",&number);
	mergesort(array,0,size-1);
	search(array,0,size-1,number);
}
