#include<stdio.h>
void main()
{
    int i,n,t1=0,t2=1,newterm;    
    printf("Enter the Limit:");
    scanf("%d",&n);
    printf("Fibonacci Series:\n");
    for(i=0;i<=n;i++)
    { 
       printf("%d\t",t1);
       newterm=t1+t2;
       t1=t2;
       t2=newterm;       

    }
}