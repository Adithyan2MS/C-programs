#include<stdio.h>
void main()
{
    char str[50],i,count=0;
    printf("Enter a String:");
    scanf("%s",str);
    while(str[i]!='\0')
    {
        i++;
    }
    printf("Lenght=%d",i);
}