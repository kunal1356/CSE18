#include<stdio.h>
int main()
{
    int num,i,r,rev=0;;
    printf("Enter a number ");
    scanf("%d",&num);
    i=num;
    while(num!=0)
    {
        r=num%10;
        rev=rev*10+r;
        num=num/10;
    }
    printf("Reverse of %d is %d",i,rev);
}