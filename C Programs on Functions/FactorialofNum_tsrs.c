#include<stdio.h>
int factorial(int);
int main()
{
    int num;
    printf("Enter a number ");
    scanf("%d",&num);
    num=factorial(num);
    printf("%d",num);
}
int factorial(int num)
{
    int sum=1;
    while(num!=0)
    {
        sum=sum*num;
        num--;
    }
    return sum;
}