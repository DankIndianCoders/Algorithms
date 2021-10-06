#include<stdio.h>
#include<stdlib.h>

typedef struct Stack
{
	int data;
	struct Stack *next;
}node;

node *stack = NULL;

node *createNode()
{
	node *temp;
	temp = (node*)malloc(sizeof(node));
	return temp;
}

void push()
{
    node *temp = createNode();
    printf ("Enter Your Data : ");
    scanf ("%d",&temp->data);
    temp->next=NULL;
    temp->next=stack;
    stack=temp;
    printf("\n\n%d Pushed into stack\n\n",temp->data);
}

void pop()
{
	node *t=stack;
	node *del;
	if(stack==NULL)
		printf("\nStack is empty, UNDERFLOW!!\n");
	else if(stack->next==NULL)
	{
		del=stack;
		stack=NULL;
		printf("\n\n%d Popped into stack\n\n",del->data);
	}
	else
	{
		del=stack;
		stack=stack->next;
		printf("\n\n%d Popped into stack\n\n",del->data);
	}
	free(del);
}

void print()
{
	if(stack==NULL)
	{
		printf("Stack is empty!!");
		return 0;
	}
	node *t = stack;
	int count = 0;
	printf ("\nData present in the stack\n");
	while(t!=NULL)
	{
		count++;
		printf ("%d \n",t->data);
		t=t->next;
	}
	printf("\nNumber of elements in the stack : %d\n\n",count);
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
