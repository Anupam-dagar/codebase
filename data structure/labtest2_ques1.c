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

int search(int array[],int low,int high,int find)
{
	int mid;
	mid = (low + high)/2;
	while(low<=high)
	{	if(array[mid] == find)
		{
			return 1;
		}
		else if(find < array[mid])
		{
			high = mid - 1;
			mid = (low + high)/2;
		}
		else if(find > array[mid])
		{
			low = mid + 1;
			mid = (low + high)/2;
		}
	}
	return 0;
}

int main()
{
	int i,n,charconvert1,num[100000],num1[100000],number,number1;
	int charconvert2,q,value;
	char s[10000],s1[10000];
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%s",s);
		charconvert1 = s[0];
		charconvert1 = charconvert1 - 64;		
		number = 0;
		number = ((charconvert1 * 1000) + (s[1]-'0') * 100 + (s[2]-'0') * 10 + s[3]-'0');
		num[i] = number;
	}
	scanf("%d",&q);
	for(i=0;i<q;i++)
	{
		scanf("%s",s1);
		charconvert2 = s1[0];
		charconvert2 = charconvert2 - 64;
		number1 = ((charconvert2 * 1000) + (s1[1]-'0') * 100 + (s1[2]-'0') * 10 + s1[3]-'0');
		num1[i] = number1;	
	}
	quicksort(num,0,n-1);
	for(i=0;i<q;i++)
	{
		value = search(num,0,n-1,num1[i]);
		printf("%d\n",value);
	}
	return 0;
}
