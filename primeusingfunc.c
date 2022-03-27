#include<stdio.h>
int prime(int n)
{
    int j,flag=0;
    for(j=2;j<=n/2;j++)
    {
        if(n%j==0)
        {
            flag=1;
            break;
        }
    }
    if(flag==0)
    return 1;
    else
    return 0;

}
void main()
{
    int range,i;
    printf("Enter the range:\n");
    scanf("%d",&range);
    for(i=2;i<=range;i++)
    {
        if(prime(i)==1)
        printf("%d\t",i);
    }

}