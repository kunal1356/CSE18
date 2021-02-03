#include<stdio.h>
int main()
{
    int a,b,c;
    printf("enter 3 numbers\n");
    printf("A=");
    scanf("%d",&a);
    printf("B=");
    scanf("%d",&b);
    printf("C=");
    scanf("%d",&c);
    if(a>b && a>c)
    printf("%d is greatest",a);
    else if(b>a && b>c)
    printf("%d is greatest",b);
    else
    printf("%d is greatest",c);
}