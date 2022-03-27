#include<stdio.h>
#include<string.h>
void main()
{
    char str[40];
    printf("Enter a String");
    scanf("%s",str);
    printf("String is %s",str);
    printf("Upper case:%s",strupr(str));
    printf("Lower case:%s",strlwr(str));
}