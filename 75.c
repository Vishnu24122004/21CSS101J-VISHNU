 #include <stdio.h>
#include <stdlib.h>

#define MAX_SIZE 25

struct queue
{
      int list[MAX_SIZE];
      int front,rear;
};
void enqueue(struct queue *,int);
int dequeue(struct queue *);
int main(void)
{
	struct queue q;
	int ch,x,p;
	q.rear=-1;
	q.front=0;
	while(1)
	{
		printf("\n 1.INSERT 2.RETRIEVE 3.EXIT \n");
		printf("\n Enter your choice: ");
		scanf("%d",&ch);
		switch(ch)
		{
			case 1:	printf("\n ENTER THE NO :");
       				scanf("%d",&x);
       				enqueue(&q,x);
       				break;
			case 2: p=dequeue(&q);
	 				if(p!=-1)
	 					printf("\n Dequeued Element is %d",p);
        			break;
			case 3:	exit(0);
		}
	}
	return 0;
}

void enqueue(struct queue *qp,int x)
{
	if(qp->rear==MAX_SIZE-1)
	{
		printf("\nOVERFLOW");
		return;
	}
	(qp->rear)++;
 	qp->list[qp->rear]=x;
	return;
}

int dequeue(struct queue *qp)
{

	if(qp->front>qp->rear)
	{
		printf("\nUNDERFLOW");
		return(-1);
	}
	return(qp->list[(qp->front)++]);
}

