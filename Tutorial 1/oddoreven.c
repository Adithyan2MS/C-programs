#include<stdio.h>
void main()
{
    int n;
    printf("Enter the Number: ");
    scanf("%d",&n);
    if(n%2==0)
    {
        printf("The number is Even");
    }
    else{
        printf("The number is odd");
    }
}