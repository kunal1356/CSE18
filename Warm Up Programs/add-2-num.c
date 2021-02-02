#include<stdio.h>
int main()
{
    int a,b;
    printf("Enter 2 numbers\n"); 
    printf("A=");
    scanf("%d",&a);                 //enter first number.
    printf("B=");
    scanf("%d",&b);                 //enter 2nd number.
    a=a+b;                          //Addition of 'a' and 'b',and UPDATING 'a' variable.
    printf("Sum of A+B = %d",a);
}