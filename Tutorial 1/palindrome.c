#include<stdio.h>
void main()
{
    int n,a,rem,newnum;
    printf("Enter a number");
    scanf("%d",&n);
    a=n;
    newnum=0;
    while(n>0)
    {
        rem=n%10;
        newnum=newnum*10+rem;
        n=n/10;
    }
    if(a==newnum)
    {
        printf("The number is palindrome");
    }
    else{
        printf("Not Palindrome");
    }    

}