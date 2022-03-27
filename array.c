#include<stdio.h>
void main()
{
    int i,n,array[40];
    printf("Enter the size of the array");
    scanf("%d",&n);
    printf("Enter the Elements of Array\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&array[i]);
    }
    printf("The Elements are:\n");
    for(i=0;i<n;i++)
    {
        printf("%d\n",array[i]);
    }
}