#include<stdio.h>
void main()
{
    int i,n,ar[40],sum=0;
    float avg;
    printf("Enter the size of the array");
    scanf("%d",&n);
    printf("Enter the Elements");
    for(i=0;i<n;i++)
    {
        scanf("%d",&ar[i]);
    }
    for(i=0;i<n;i++)
    {
        sum=sum+ar[i];
    }
    avg=sum/n;
    printf("Sum and Average is:%d and %f",sum,avg);
}