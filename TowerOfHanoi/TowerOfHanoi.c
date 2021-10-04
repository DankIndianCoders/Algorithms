#include<stdio.h>
// Tower of Hanoi recursive func.
void TowerOfHanoi(int N,char From,char To,char M)
{
	if(N==1)
	{
		printf("\nMove from %c  to  %c :\n",From,To);
		return;
	}
	TowerOfHanoi(N-1,From,M,To);
	printf("\nMove from %c  to  %c :\n",From,To);
	TowerOfHanoi(N-1,M,To,From);
}
int main()
{
	int N;
	printf("Enter the no. of the Disk :");
	scanf("%d",&N);
    // func calling.
	TowerOfHanoi(N,'A','C','B');
}