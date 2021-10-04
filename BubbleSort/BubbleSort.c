#include <stdio.h> 
#include<stdlib.h>
// Func. to swap Two values.
void swap(int *x, int *y) 
{ 
	int temp = *x; 
	*x = *y; 
	*y = temp; 
}  
// the main Bubble Sort func.
void bubbleSort(int *arr, int n) 
{ 
int i, j; 
for (i = 0; i < n-1; i++)
	for (j = 0; j < n-i-1; j++) 
		if (arr[j] > arr[j+1]) 
			swap(&arr[j], &arr[j+1]); 
} 
// func. to print sorted array.
void printArray(int *arr, int size) 
{ 
	int i; 
	for (i=0; i < size; i++) 
		printf("%d ", arr[i]); 
	printf("\n"); 
} 
int main() 
{
	int *arr,n,i;
	printf("Enter the no of the elements :");
	scanf("%d",&n);
    // Dynamically allocating memory.
	arr=(int*)malloc(n*sizeof(int));
	printf("Enter the elements :");
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	bubbleSort(arr, n); 
	printf("Sorted array: \n"); 
	printArray(arr, n); 
	return 0; 
} 