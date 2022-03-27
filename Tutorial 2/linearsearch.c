#include<stdio.h>
void main()
{
    int i,n,a[40],search,flag=0;
    printf("Enter the size of the array:");
    scanf("%d",&n);
    printf("Enter the Elements of th array\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("Enter the element to be searched:");
    scanf("%d",&search);
    for(i=0;i<n;i++)
    {
        if(a[i]==search)
        {
            flag=1;
            break;
        }
    }
    if(flag=1)
    {
    printf("The position of searched element is:%d",i+1);
    }
    else{
        printf("Not Found!");
    }
}