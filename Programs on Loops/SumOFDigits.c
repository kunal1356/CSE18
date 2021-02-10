#include<stdio.h>
int main()
{
    int num,i,a,sum=0;
    printf("enter the number ");
    scanf("%d",&num);
    i=num;
    while(num!=0)
    {
        a=num%10;
        sum=sum+a;
        num=num/10;
    }
    printf("Sum of %d is %d",i,sum);
}