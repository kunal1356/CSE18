#include<stdio.h>
int square(int);
int main()
{
    int num;
    printf("Enter a number to find out sum of squares of digits ");
    scanf("%d",&num);
    num=square(num);
    printf("sum = %d",num);
}
int square(int num)
{
    if(num/10==0)
    return num*num;
    return( (num%10) * (num%10) + square(num/10));
}