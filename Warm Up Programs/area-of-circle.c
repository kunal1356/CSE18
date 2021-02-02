#include<stdio.h>
int main()
{
    int r;
    float area=0;
    printf("Enter Radius of a circle\n");       
    printf("r=");                           
    scanf("%d",&r);                         //enter radius.
    area=3.14*r*r;                          //calculating area of a circle.
    printf("Area of a circle = %.2f",area); //.2f gives value in 2 decimal.
}