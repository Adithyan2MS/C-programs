#include<stdio.h>
void main()
{
    int n,a,i,rem,sum=0;
    printf("Enter the Number");
    scanf("%d",&n);
    a=n;
    while(n!=0)
    {
        rem=n%10;
        sum=sum+(rem*rem*rem);
        n=n/10;
    }
    if(a==sum)
    {
        printf("The Number is Armstrong");
    }
    else{
        printf("Not Armstrong");
    }
}