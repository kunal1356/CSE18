#include<stdio.h>
void reverseNatural(int);
int main()
{
    int num;
    printf("enter a number to print in reverse ");
    scanf("%d",&num);
    reverseNatural(num);
}
void reverseNatural(int num)
{
    if(num>=1)
    {
        printf(" %d",num);
        reverseNatural(num-1);
    }
}