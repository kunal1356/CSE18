#include<stdio.h>
int main()
{
    int num;
    printf("Enter a number which is divisible by 5");
    scanf("%d",&num);
    if(num%5 == 0)                                  
    printf("%d is divisible",num);
    else
    printf("%d Not divisible",num);
}