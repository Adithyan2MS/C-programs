#include<stdio.h>
void main()
{
    int r1,c1,r2,c2,i,j,a[10][10],b[10][10],k,pro=0,p[10][10];
    printf("Enter Rows and Column for Matrix A:\n");
    scanf("%d%d",&r1,&c1);
    printf("Enter Rows and Column for Matrix B:\n");
    scanf("%d%d",&r2,&c2);
    if(c1==r2)
    {
    printf("Enter Elements of Matrix A:\n");
    for(i=1;i<=r1;i++)
    {
        for(j=1;j<=c1;j++)
        {
            printf("a%d%d ",i,j);
            scanf("%d",&a[i][j]);
        }
    }
    printf("Matrix A:\n");
    for(i=1;i<=r1;i++)
    {
        for(j=1;j<=c1;j++)
        {
            printf("%d ",a[i][j]);
            if(j==c1)
            printf("\n");
        }
    }

    
     printf("Enter Elements of Matrix B:\n");
    for(i=1;i<=r2;i++)
    {
        for(j=1;j<=c2;j++)
        {
            printf("b%d%d ",i,j);
            scanf("%d",&b[i][j]);
        }
    }
    printf("Matrix B:\n");
    for(i=1;i<=r2;i++)
    {
        for(j=1;j<=c2;j++)
        {
            printf("%d ",b[i][j]);
            if(j==c2)
            printf("\n");
        }
    }
    for(i=1;i<=r1;i++)
    {
        for(j=1;j<=c2;j++)
        {
            for(k=1;k<=r2;k++)
            {
                pro=pro+a[i][k]*b[k][j];
            }
            p[i][j]=pro;
            pro=0;
        }
    }
    printf("Product:\n");
    for(i=1;i<=r1;i++)
    {
        for(j=1;j<=c2;j++)
        {
            printf("%d\t",p[i][j]);
        }
        printf("\n");
    }
    }
    else 
    {
        printf("ERROR");
    }
    

}