#include<stdio.h>
int main()
{
    int a,b;
    printf("Enter 2 numbers\n");
    printf("A=");
    scanf("%d",&a);
    printf("B=");
    scanf("%d",&b);
    if(a>b)
    printf("A=%d is greater",a);
    else
    printf("B=%d is greater",b);
}