#include<stdio.h>
void main()
{
    int i,j,order,a[10],b[10],sum[10];
    printf("Enter the order of First and Second Polynomial:");
    scanf("%d",&order);
    printf("Enter the Coefficents of First Polynomial\n");
    for(i=0;i<=order;i++)
    {
        scanf("%d",&a[i]);
    }   
    printf("Polynomial Representation:\n");
    j=order;
    if(a[0]!=0)
    {
        printf("%dx^%d",a[0],j);
    }
    for(i=1;i<order;i++)
    {
        j--;
        if(a[i]>1)
        {
           if(j>1)
           {
                printf("+%dx^%d",a[i],j);
           }
           else
           {
               printf("+%dx",a[i]);
           }
        }
        else if(a[i]<-1)
        {
            if(j>1)
           {
                printf("%dx^%d",a[i],j);
           }
           else
           {
               printf("%dx",a[i]);
           }            
        }
        else if(a[i]==1)
        {
            if(j>1)
            {
                printf("+x^%d",j);
            }
            else
            {
                printf("+x");
            }
        }
        else if(a[i]==-1)
        {
            if(j>1)
            {
                printf("-x^%d",j);
            }
            else
            {
                printf("-x");
            }
        }
    }
    if(a[order]>0)
    {
        printf("+%d",a[order]);
    }
    else if(a[order]<0)
    {
        printf("%d",a[order]);
    }
    printf("\nEnter the Coefficents of Second Polynomial\n");
    for(i=0;i<=order;i++)
    {
        scanf("%d",&b[i]);
    }
    printf("Polynomial Representation:\n");
    j=order;
    if(b[0]!=0)
    {
        printf("%dx^%d",b[0],j);
    }
    for(i=1;i<order;i++)
    {
        j--;
        if(b[i]>1)
        {
           if(j>1)
           {
                printf("+%dx^%d",b[i],j);
           }
           else
           {
               printf("+%dx",b[i]);
           }
        }
        else if(b[i]<-1)
        {
            if(j>1)
           {
                printf("%dx^%d",b[i],j);
           }
           else
           {
               printf("%dx",b[i]);
           }            
        }
        else if(b[i]==1)
        {
            if(j>1)
            {
                printf("+x^%d",j);
            }
            else
            {
                printf("+x");
            }
        }
        else if(b[i]==-1)
        {
            if(j>1)
            {
                printf("-x^%d",j);
            }
            else
            {
                printf("-x");
            }
        }
       
    }
    if(b[order]>0)
    {
        printf("+%d",b[order]);
    }
    else if(b[order]<0)
    {
        printf("%d",b[order]);
    }
    printf("\nPerforming Addition...\n");
    for(i=0;i<=order;i++)
    {
        sum[i]=a[i]+b[i];
    }    
    printf("Polynomial After Addition is\n");
    j=order;
    if(sum[0]!=0)
    {
        printf("%dx^%d",sum[0],j);
    }
    for(i=1;i<order;i++)
    {
        j--;
        if(sum[i]>1)
        {
           if(j>1)
           {
                printf("+%dx^%d",sum[i],j);
           }
           else
           {
               printf("+%dx",sum[i]);
           }
        }
        else if(sum[i]<-1)
        {
            if(j>1)
           {
                printf("%dx^%d",sum[i],j);
           }
           else
           {
               printf("%dx",sum[i]);
           }            
        }
        else if(sum[i]==1)
        {
            if(j>1)
            {
                printf("+x^%d",j);
            }
            else
            {
                printf("+x");
            }
        }
        else if(sum[i]==-1)
        {
            if(j>1)
            {
                printf("-x^%d",j);
            }
            else
            {
                printf("-x");
            }
        }
       
    }
    if(sum[order]>0)
    {
        printf("+%d",sum[order]);
    }
    else if(sum[order]<0)
    {
        printf("%d",sum[order]);
    }
}