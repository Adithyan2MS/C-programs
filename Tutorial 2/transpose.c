#include<stdio.h>
void main()
{
    int r,c,i,j,a[10][10],transpose[10][10];
    printf("Enter Rows and Columns:");
    scanf("%d%d",&r,&c);
    printf("Enter matrix Element:\n");
    for(i=1;i<=r;i++)
    {
        for(j=1;j<=c;j++)
        {
            printf("a%d%d ",i,j);
            scanf("%d",&a[i][j]);
        }
    }
    printf("Matrix is:\n");
    for(i=1;i<=r;i++)
    {
        for(j=1;j<=c;j++)
        {
            printf("%d  ",a[i][j]);
            if(j==c)
            {
                printf("\n");
            }
        }
    }
    printf("Transpose of the Matrix is:\n");
    for(i=1;i<=r;i++)
    {
        for(j=1;j<=c;j++)
        {
            transpose[j][i]=a[i][j];
        }
    }
    for(i=1;i<=r;i++)
    {
        for(j=1;j<=c;j++)
        {
            printf("%d  ",transpose[i][j]);
            if(j==c)
            {
                printf("\n");
            }
        }
    }

}