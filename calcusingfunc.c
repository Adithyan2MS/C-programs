#include<stdio.h>
int add(int a,int b)
{
    return a+b;
}
int sub(int a,int b)
{
    return a-b;
}
int multiply(int a,int b)
{
    return a*b;
}
int div(int a,int b)
{
    return a/b;
}
int main()
{
    int x,y;
    printf("Enter any 2 values:\n");
    scanf("%d%d",&x,&y);
    printf("Addition:%d\n",add(x,y));
    printf("Substraction:%d\n",sub(x,y));
     printf("Multiplication:%d\n",multiply(x,y));
      printf("Division:%d\n",div(x,y));
    
}