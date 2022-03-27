#include<stdio.h>
void main()
{
    int n,a,rem,rev=0;
    printf("Enter the Number: ");
    scanf("%d",&n);
    a=n;
    while(n)
    {
        rem=n%10;
        rev=rev*10+rem;
        n=n/10;
    }
    printf("The Reverse of %d is :%d",a,rev);
    }