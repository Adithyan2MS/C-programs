#include<stdio.h>
void main()
{
    int ch;
    printf("Enter the Character");
    scanf("%c",&ch);
    if((ch>='a'&&ch<='z')||(ch>='A'&&ch<='Z'))
    {
        printf("Character is an alphabet");
    }
    else{
        printf("Not alphabet");
    }
}