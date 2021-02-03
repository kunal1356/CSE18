#include<stdio.h>
int main()
{
    int num;
    printf("Enter a number is EVEN or ODD");
    scanf("%d",&num);
    if(num&1)                               // Even binary digit's contain '1' in end.
    printf("Odd Number");                   // Using AND operator '&' with '1' gets add with last binary number and gives ouput '0'.
    else
    printf("Even Number");
}