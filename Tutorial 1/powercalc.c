#include<stdio.h>
void main()
{
    int n,p,val=1;
    printf("Enter the Number and power");
    scanf("%d%d",&n,&p);
    for(p;p!=0;p--)
    {
        val=val*n;
    }
    printf("value is %d:",val);
    
}