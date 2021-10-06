#include<stdio.h>
#include<stdbool.h>
#include<stdlib.h>
#define size 5

int queue[size];
int front = -1;
int rear = -1;

bool isEmpty()
{
	if(front == -1 && rear == -1)
		return true;
	return false;
}

bool isFull()
{
	if(rear == size-1)
		return true;
	return false;
}

void enQueue()
{
	int val;
	if(isFull())
		printf("Queue is FULL !!");
	else if(isEmpty())
	{
		printf("\nEnter value : ");
		scanf("%d",&val);
		front = rear = 0;
		queue[rear]=val;
	}
	else
	{
		printf("\nEnter value : ");
		scanf("%d",&val);
		rear++;
		queue[rear]=val;
	}
	printf("\n");
}

void deQueue()
{
	if(isEmpty())
		printf("\nQueue is EMPTY!!\n");
	else if(front == rear)
		front=rear=-1;
	else
		front ++;
}

void print()
{
	if(isEmpty())
		printf("\nQueue is EMPTY!!\n");
	else
	{
		for(int i=front;i<=rear;i++)
			printf("%d ",queue[i]);
	}
	printf("\n");
}
int main()
{
	int choice; 
	do
	{
		printf("ENTER CHOICE :\n1.Enqueue\n2.Dequeue\n3.Display\n4.Exit\n\n");
		scanf("%d",&choice);
		switch(choice)
    	{
			case 1: enQueue();
	    	break;
    		case 2: deQueue();
	    	break;
    		case 3: print();
	   		break;
    		case 4: exit(0);
	    	break;
		}
   }while (choice!=4);
   return 0;
}