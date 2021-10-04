#include<stdio.h>
#include<stdlib.h>
// The InsertionSort Func.
void InsertionSort(int *arr,int n)
{
	int i,j,key;
	for(j=0;j<n;j++)
	{
		key=arr[j];
		i=j-1;
	    while(i>=0&&arr[i]>key)
	    {
	    	arr[i+1]=arr[i];
	    	i=i-1;
		}
		arr[i+1]=key;
	}
	printf("SORTED ARRAY ==");
	for(i=0;i<n;i++) 
	{
		printf("%d",arr[i]);
		printf(" "); 
	}
}
int main()
{
	int *arr,n;
	printf("Enter the no. of the element=");
	scanf("%d",&n);
	arr=(int*)malloc(n*sizeof(int));
	printf("Enter the array elements=");
	for(int i=0;i<n;i++)
	scanf("%d",&arr[i]);
	InsertionSort(arr,n);
}