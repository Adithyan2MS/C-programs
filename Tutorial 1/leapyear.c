#include<stdio.h>
void main()
{
    int y;
    printf("Enter the Year:");
    scanf("%d",&y);
    if(y%4==0)
    {
        if(y%100==0)
        {
            if(y%400==0)
            {     
                printf("%d is a Leapyear",y);
            }
            else
            {
                printf("%d is not a leapyear",y);
            }
        }
        else
        {
            printf("%d is a Leapyear",y);
        }
    }
    else
    {
        printf("%d is not a Leapyear",y);
    }
}