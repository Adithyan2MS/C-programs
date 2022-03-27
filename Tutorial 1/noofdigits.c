#include<stdio.h>
void main()
{
    int n,count=0;
    printf("Enter the Number:");
    scanf("%d",&n);
    while(n!=0)
    {
        n=n/10;
        count++;
    }
    printf("Number of digits in the Digit is %d",count);
}