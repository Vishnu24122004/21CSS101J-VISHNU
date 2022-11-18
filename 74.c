 #include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *next;
};

void pushNode(struct node **, int);
int popNode(struct node **);

int main(void)
{
    int x,ch;
    struct node *head;
    head=NULL;
    while(1)
    {
        printf("\n 1.push 2.pop 3.EXIT\n");
        printf("\n Enter choice :");
        scanf("%d",&ch);
        switch(ch)
        {
        case 1:
            printf("\n Enter the data :");
            scanf("%d",&x);
            pushNode(&head,x);
            break;
        case 2:
            x=popNode(&head);
	     if(x!=-1)	
            	printf("\n The popped element = %d", x);
            break;
       case 3:
           exit(0);
      	}
    }
    return 0;
}

void pushNode(struct node **t, int x)
{
    struct node *p;
    p=(struct node *)malloc(sizeof(struct node));
    if(p==NULL)
    {
        printf("\nOVER FLOW");
        return;
    }
    p->data=x;
    p->next=*t;
    *t=p;
    
}

int popNode(struct node **t)
{
    int n;
    struct node *p;
    if(*t==NULL)
    {
        printf("\n UNDERFLOW");
        return -1;
    }
    n=(*t)->data;
    p=*t;
    *t=(*t)->next;
    free(p);
    return n;
}

