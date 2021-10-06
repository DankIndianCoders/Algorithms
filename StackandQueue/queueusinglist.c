#include<stdio.h>
#include<stdlib.h>

typedef struct node
{
	int data;
	struct node *next;
}node;

node *head = NULL;

node *createNode()
{
	node *temp;
	temp = (node*)malloc(sizeof(node));
	return temp;
}

void enQueue()
{
    node *temp = createNode();
    printf ("Enter Your Data : ");
    scanf ("%d",&temp->data);
    temp->next=NULL;
    if(head==NULL)
        head=temp;
    else 
    {
        node *t=head;
    	while (t->next!=NULL)
            t=t->next;
    	t->next=temp;
	}
    printf("Data successfully Entered \n\n");
    
}

void deQueue()
{
	node *t=head;
	node *del;
	if(head==NULL)
		printf("\nQueue is empty, UNDERFLOW!!\n");
	else if(head->next==NULL)
	{
		del=head;
		head=NULL;
		printf("\n%d Popped from Queue\n\n",del->data);
	}
	else
	{
		del=head;
		head=head->next;
		printf("\n%d Popped from Queue\n\n",del->data);
	}
	free(del);
}

void print()
{
	if(head==NULL)
	{
		printf("Queue is EMPTY!!\n");
		return;
	}
	node *t = head;
	printf ("Data present in the Queue : \n");
	while(t!=NULL)
	{
		printf ("%d \n",t->data);
		t=t->next;
	}
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