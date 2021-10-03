#include <stdio.h>
#include <stdlib.h>
// Partition func of The Quick Sort Algorithm.
int partition (int *arr, int low, int high)
{
    int pivot = arr[high];
    int i = (low - 1);
    int j,t;
    for (j = low; j <= high- 1; j++)
    {
        if (arr[j] <= pivot)
    {
    i++;
    t=arr[i];
    arr[i]=arr[j];
    arr[j]=t;
    }
    }
    t=arr[i+1];
    arr[i+1]=arr[high];
    arr[high]=t;
    return (i + 1);
}
// The main Quick Sort func.
void quickSort(int *arr, int low, int high) 
{ 
    if (low < high)
    { 
        int pi = partition(arr, low, high); 

        quickSort(arr, low, pi - 1); 
        quickSort(arr, pi + 1, high); 
    } 
} 

int main() 
{ 
    int n,i,*arr;
    printf("Enter the no. of elements : ");
    scanf("%d",&n);
    // Dynamically Allocating Memory.
    arr=(int*)malloc(n*sizeof(int));
    printf("Enter the elemnts :");
    for(i=0;i<n;i++)
       scanf("%d",&arr[i]);     
    quickSort(arr, 0, n-1); 
    printf("Elements after sorting :");
    for (i=0; i < n; i++) 
        printf("%d ", arr[i]);
    return 0; 
}