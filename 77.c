
#include <stdio.h>
#include <stdlib.h>
 struct node
{
 int data;
 struct node *next;
};
typedef struct node NODE;
typedef  struct queue 
{
	NODE* front;
	NODE* rear;
} QUEUE;
void enqueue (QUEUE *qp, int item )  
{  
NODE *q ;  
/* create new node */  
 q = (NODE *)malloc ( sizeof ( NODE ) ) ;  
 if(q == NULL)
   {
   printf("queue is full");
   return;
  }
q -> data = item ;  
q -> next = NULL ;  
/* if the queue is empty */  
if ( qp->front ==  NULL )  
qp->front = q ;  
else  
(qp->rear) -> next = q ;  
	qp->rear = q ;  
}  


/* removes an element from front of queue */  
int dequeue(QUEUE *qp )  
{  
NODE *q ;  
int item ;  
  
/* if queue is empty */  
if ( qp->front == NULL )  
{
printf ( "queue is empty " ) ;  
return(-1);
}
else  
{  
/* delete the node */  
q = qp->front ;  
item = q -> data ;  
qp->front = q -> next ;  
free ( q ) ;  
  
/* if on deletion the queue has become empty */  
if ( qp->front == NULL )  
qp->rear =  NULL ;  
  
return ( item ) ;  
}  
}

int main(void)
{
    int x,ch;
    QUEUE que;
    que.front=que.rear=NULL;
    while(1)
    {
        printf("\n 1.ENQUEUE 2.DEQUEUE 3.EXIT\n");
        printf("\n Enter choice :");
        scanf("%d",&ch);
        switch(ch)
        {
        case 1:
            printf("\n Enter the data :");
            scanf("%d",&x);
            
            enqueue(&que,x);
            break;
        case 2:
            x=dequeue(&que);
            if(x!=-1)
            	printf("\n Dequeued element = %d", x);
            break;
       case 3:
           exit(0);
        }
    }
    return 0;
}

