#include<stdio.h>
void main()
{
    int n,i;
    printf("Enter the number");
    scanf("%d",&n);
    printf("Factors of %d are:",n);
    for(i=1;i<=n;i++)
    {
        if(n%i==0)
        {
            printf("%d\n",i);

        }
    }
}