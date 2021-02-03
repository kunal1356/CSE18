#include<stdio.h>
int main()
{
    int a,b;
    printf("enter 2 numbers for swapping\n");
    printf("A=");
    scanf("%d",&a);
    printf("B=");
    scanf("%d",&b);
    a=a+b;
    b=a-b;
    a=a-b;
    printf("after swapping\n");
    printf("A=%d B=%d",a,b);
}