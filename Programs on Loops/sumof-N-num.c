#include<stdio.h>
int main()
{
    int num,i,sum=0;
    printf("Enter a number to find sum");
    scanf("%d",&num);
    for(i=1;i<=num;i++)
    {
        sum=sum+i;
    }
    printf("Sum of N natural number %d",sum);
}