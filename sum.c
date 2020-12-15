#include<stdio.h>
#include<conio.h>
void main()
{
    int a,b,sum,multiply,subtract,divide;
    printf("enter the value of a and b:");
    scanf("%d %d",&a,&b);
    sum= a + b;
    multiply = a*b;
    subtract= a-b;
    divide= a/b;
    printf("\n%d + %d = %d", a ,b, sum);
    printf("\n%d * %d = %d", a ,b, multiply);
    printf("\n%d - %d = %d", a ,b, subtract);
    printf("\n%d / %d = %d", a ,b, divide);
    getche();

}