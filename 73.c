 #include<conio.h>
#include<stdio.h>
struct stack
{
int list[10];
int top;
} ;

void push(struct stack *,int);
int pop(struct stack *);
		
		int main( )
		{
struct stack s;
		int n, r;
		printf("\n Enter the number : ");
		scanf("%d", &n);
		while(n > 0)
		{
			r=n%2;
			push(&s,r);
			n=n/2;
		}
		printf("\n Binary equivalent is :");
		while( s.top != -1)
			printf("%d",pop(&s));
		return 0;
		}
 void push(struct stack *sp,int x)
{
if(sp->top==SIZE -1)
  {
         printf("\n OVERFLOW");
         return;
  }
  		sp->list[++sp->top]=x;
return;
}
   

int pop(struct stack *sp)
{
        int x;
        if(sp->top==0)
        {
         printf("\nSTACK IS EMPTY i,e UNDERFLOW");
         return (-1);
        }
        x=sp->list[sp->top];
        sp->top--;
        return x;
 }

