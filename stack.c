#include<stdio.h>
#include<stdlib.h>
#define MAX 5
int item;
int push(int stack[],int top)
{
    if(top==MAX-1)
    printf("Stack Overflow\n");
    else
    {
        printf("Enter the item\n");
        top++;
        scanf("%d",&item);
        stack[top]=item;
    }return top;
}
int pop(int stack[],int top)
{
    if(top==-1)
    printf("Stack underflow,Can't delete\n");
    else
    {
    item=stack[top];
    top--;
    printf("%d deleted\n",item);
    }return top;
}
int display(int stack[],int top)
{
    if(top==-1)
    printf("Stack underflow, no element present\n");
    else
    {
        for(int i=top;i>=0;i--)
        printf("%d\n",stack[i]);
    }
}
int main()
{
    int choice,stack[MAX],top=-1;
    while(1)
    {
        printf("1.PUSH\n2.POP\n3.DISPLAY\n4.Exit\n Enter your choice");
        scanf("%d",&choice);
        switch(choice)
        {
            case 1:top=push(stack,top);
            break;
            case 2:top=pop(stack,top);
            break;
            case 3:display(stack,top);
            break;
            case 4:exit(0);
            break;
        }
    }
}