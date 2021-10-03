#include<Stdlib.h>
#include<stdio.h>
// This func is use to merge the sorted array.
void merge(int *arr, int start, int mid, int end) {
	int temp[end - start + 1];
	int i = start, j = mid+1, k = 0;
	while(i <= mid && j <= end) {
		if(arr[i] <= arr[j]) {
			temp[k] = arr[i];
			k += 1; i += 1;
		}
		else {
			temp[k] = arr[j];
			k += 1; j += 1;
		}
	} 
	while(i <= mid) {
		temp[k] = arr[i];
		k += 1; i += 1;
	}
	while(j <= end) {
		temp[k] = arr[j];
		k += 1; j += 1;
	}
	for(i = start; i <= end; i += 1) {
		arr[i] = temp[i - start];
	}
}
// The main Merge Sort func.
void MergeSort(int *arr, int start, int end) {

	if(start < end) {
		int mid = (start + end) / 2;
		MergeSort(arr, start, mid);
		MergeSort(arr, mid+1, end);
		merge(arr, start, mid, end);
	}
}
int main()
{
	int n,*ar,i;
	printf("Enter the no. of elements :");
	scanf("%d",&n);
	ar=(int*)malloc(n*sizeof(int));
	printf("Enter the elements :");
	for(i=0;i<n;i++)
	{
		scanf("%d",&ar[i]);
	}
	MergeSort(ar,0,n-1);
	printf("Elements after sorting :");
	for(i=0;i<n;i++){
		printf(" %d ",ar[i]);
	}
}