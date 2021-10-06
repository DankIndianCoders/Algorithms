#include<stdio.h>
#include<stdbool.h>
#include<stdlib.h>
#define MAX 5
#define MIN -1

int stack[MAX];
int top = -1;

bool notOverflow()
{
	if (top+1<MAX)
		return true;
	return false;
}

bool notUnderflow()
{
	if(top!=MIN)
		return true;
	return false;
}

void push()
{
	int val;
	if (notOverflow())
	{
		printf("Enter Your Data : ");
		scanf("%d",&val);
		stack[++top]=val;
	}
	else
	{
		printf("\nSTACK OVERFLOW!!!\n\n");
	}
}

void pop()
{
	if (notUnderflow())
	{
		printf("Popped Value : %d\n",stack[top--]);
	}
	else
	{
		printf("\nSTACK UNDERFLOW!!!\n\n");
	}
}

void print()
{
	int i;
	printf("\nData present in the stack : ");
    for(i=0;i<=top;i++)
    	printf("%d ",stack[i]);
    printf("\n\n");
}

int main()
{
	int choice; 
	do
	{
		printf("ENTER CHOICE :\n1.Push\n2.Pop\n3.Display\n4.Exit\n\n");
		scanf("%d",&choice);
		switch(choice)
    	{
			case 1: push();
	    	break;
    		case 2: pop();
	    	break;
    		case 3: print();
	   		break;
    		case 4: exit(0);
	    	break;
		}
   }while (choice!=4);
   return 0;
}