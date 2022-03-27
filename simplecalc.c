#include<stdio.h>
#include<stdlib.h>
void main()
{
    int a,b,x;
    float c;
    printf("Enter any 2 Numbers");
    scanf("%d%d",&a,&b);
    printf("Simple Calculator\n");
    printf("1.Addition\n");
    printf("2.Substraction\n");
    printf("3.Multiplication\n");
    printf("4.Division\n");
  
    printf("Enter your Choice.");
    scanf("%d",&x);
    switch(x)
    {
        case 1:c=a+b;
        break;
        case 2:c=a-b;
        break;
        case 3:c=a*b;
        break;
        case 4:c=a/b;
        break;
        
        default:printf("Wrong Choice!");
         break;
    }
    printf("REsult is %f",c);
}