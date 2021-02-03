#include<stdio.h>
int main()
{
    int x,y;
    printf("Enter 2 numbers\n");
    printf("X=");
    scanf("%d",&x);
    printf("Y=");
    scanf("%d",&y);
    if(!(x ^ y))                // OR operator gives value '0' and '!' converts 0 to '1'.  
    printf("X and Y are equal");
    else
    printf("NOT equal");
}