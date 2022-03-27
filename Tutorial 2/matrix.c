#include<stdio.h>
void main()
{
    int i,j,r,c,a[10][10];
    printf("Enter Rows and Columns:");
    scanf("%d%d",&r,&c);
    printf("Enter the Elements of the matrix:");
    for(i=1;i<=r;i++)
    {
        for(j=1;j<=c;j++)
        {
            printf("a%d%d ",i,j);
            scanf("%d",&a[i][j]);
        }
    }
    printf("Matix is:\n");
    for(i=1;i<=r;i++)
    {
        for(j=1;j<=c;j++)
        {
            printf("%d ",a[i][j]);
            if(j==c)
            {
                printf("\n");
            }

        }
    }
}