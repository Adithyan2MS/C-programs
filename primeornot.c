#include<stdio.h>
void main()
{
    int n,i,flag=0;
    printf("Enter the Number");
    scanf("%d",&n);
    for(i=2;i<=n/2;i++)
    {
        if(n%i==0)
        {
            flag=1;
            break;
        }
    }
    if(n==1)
    {
        printf("The number is not Prime");
    }
    else if(flag==1)
    {
        printf("The Number is not Prime");
    }
    else
    {
       printf("The Number is  Prime");
    }

}