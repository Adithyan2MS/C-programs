#include<stdio.h>
void main()
{
char ch;
printf("Enter the character");
scanf("%c",&ch);
switch(ch)
{
case 'a':printf("it is vowel");
         break;
case 'i':printf("it is vowel");
         break;
case 'o':printf("it is vowel");
         break;
case 'u':printf("it is vowel");
         break;
case 'e':printf("it is vowel");
         break;
default:printf("Not vowel");
}
}