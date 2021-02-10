#include<stdio.h>
int main()
{
    int num,i,sum=1;
    printf("Enter a number");
    scanf("%d",&num);
    for(i=1;i<=num;i++)
    {
        sum=sum*i;
    }
    printf("Product of N natural %d",sum);
}