#include<stdio.h>
int sum(int);
int main()
{
    int num,k;
    printf("Enter a number ");
    scanf("%d",&num);
    k=sum(num);
    printf("%d",k);
}
int sum(int num)
{
    int s=1;
    if(num==1)
    return (num);
    s=num*sum(num-1);
    return (s);
}