#include<stdio.h>
void main()
{
    int a[50],n,i,j,temp;
    printf("enter the size of the array:");
    scanf("%d",&n);
    printf("Enter %d elements:\n",n);
    for(i=0;i<n;i++)
    {
          scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        for(j=0;j<n-i;j++)
        {
            if(a[j]>a[j+1])
            {
                temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
            }
        }
    }
    printf("Sorted array is :\n");
    for(i=0;i<n;i++)
    {
        printf("%d\t",a[i]);
    }
}