#include<stdio.h>
int main()
{
    int num,num1,f=1;
    printf("Enter a number to find factorial ");
    scanf("%d",&num);
    num1=num;
    while(num!=1)
    {
        f=f*num;
        num--;
    }
    printf("Factorial of number %d is %d",num1,f);
}