#include<stdio.h>
void natural(int);
int main()
{
    int num;
    printf("enter a number ");
    scanf("%d",&num);
    natural(num);
}
void natural(int num)
{
    if(num>=1)
    {
        natural(num-1);
        printf("%d ",num);
    }
}