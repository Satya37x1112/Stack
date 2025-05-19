#include<stdio.h>
#include<conio.h>
#define max 100
typedef struct
{
    int top;
    int item[max];
}stack;
int isempty(stack *);
int isfull(stack *);
void push(stack *,int);
int pop(stack *);
void display(stack *);
void main()
{
    stack s;
    int x;
    char ch='1';
    s.top=-1;
    while(ch!='4')
    {
        printf("\n 1-Push");
        printf("\n 2-Pop");
        printf("\n 3-Display");
        printf("\n 4 Quit");
        printf("\n \n Enter your choice");
        scanf("%d",&ch);
        switch(ch)
        {
            case '1':
                printf("Enter the element to be pushed");
                scanf("%d",&x);
                push(&s,x);
                break;
            case '2':
                x=pop(&s);
                printf("\n Popped elemnt is %d",x);
                break;
            case '3':
                display(&s);
                break;
            case '4':
                break;
            default:
                printf("\n wrong choice! Try again");
                break;
        }
    }
}
int isempty(stack *s)
{
    if(s->top=-1)
        return 1;
    else
        return 0;
}
int isfull(stack *s)
{
    if(s->top==max-1)
        return 1;
    else
        return 0;
}
void push(stack *s,int x)
{
    if(isfull(s))
    {
        printf("\n stack full");
        return;
    }
    s->top++;
    s->item[s->top]=x;
}
int pop(stack *s)
{
    int x;
    if(isempty(s))
    {
        printf("\n stack empty");
        return 0;
    }
    x=s->item[s->top];
    s->top--;
}
void display(stack *s)
{
    int i;
    if(isempty(s))
    {
        printf("\n stack empty");
        return;
    }
    printf("\n elements in the stack are \n");
    for(i=s->top;i>=0;i--)
        printf("%d\n",s->item[i]);
}