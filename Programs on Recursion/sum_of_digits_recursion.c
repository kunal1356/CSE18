#include<stdio.h>
int sum(int);
int main()
{
    int num;
    printf("enter a number ");
    scanf("%d",&num);
    num=sum(num);
    printf("%d",num);
}
int sum(int num)
{
    int s;
    if(num==0)
    return num;
        s=num+sum(num-1);
        return s;
}