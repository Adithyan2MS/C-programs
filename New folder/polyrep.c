#include<stdio.h>
void main()
{
    int i,j,order,poly[10];
    printf("Enter the Order of Polynomial:");
    scanf("%d",&order);
    j=order;
    printf("Enter the Coefficent of Polynomial of order %d:\n",order);
    for(i=0;i<=order;i++)
    {      
        j--;
        scanf("%d",&poly[i]);
    }
    printf("The Polynomial Expression is:\n");
    if(poly[0]!=0)
    {
        printf("%dx^%d",poly[0],order);
    } 
    j=order;     
    for(i=1;i<order;i++)
    {
        j--;     
        if(poly[i]>1)
        {
            if(j>1)
            {
               printf("+%dx^%d",poly[i],j);
            }
            else
            {
                printf("+%dx",poly[i]);
            }
        }
        else if(poly[i]<-1)
        {
            if(j>1)
            {
                printf("%dx^%d",poly[i],j);
            }
            else
            {
                printf("%dx",poly[i]);
            }
        }
        else if(poly[i]==1)
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
        else if(poly[i]==-1)
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
        else
        {
            printf("");
        }
      
    }
    if(poly[order]>0)
    {
        printf("+%d",poly[order]);
    }
    else if(poly[order]<0)
    {
        printf("%d",poly[order]);
    }
    
}