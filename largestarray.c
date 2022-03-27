#include<stdio.h>
void main()
{
    int array[10],i,n,larg;
    printf("Enter the Size of the array:\n");
    scanf("%d",&n);
    printf("Enter the Elements of array:\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&array[i]);
    }
    larg=array[0];
    for(i=1;i<n;i++)
    {
        if(array[i]>larg)
        {
            larg=array[i];
        }
    }
    printf("Largest Element is %d",larg);
}
