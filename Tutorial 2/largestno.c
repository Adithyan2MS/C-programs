#include<stdio.h>
void main()
{
    int a[50],i,n,largest;
    printf("Enter the size of the array");
    scanf("%d",&n);
    printf("Enter the elements:\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    largest=a[0];
    for(i=1;i<n;i++)
    {
        if(largest<a[i])
        {
            largest=a[i];
        }
    }
    printf("Largest element is:%d",largest);
}