#include<stdio.h>
int AreaOfCircle(int);
int main()
{
    int r;
    float a;
    printf("Enter radius of a circle ");
    scanf("%d",&r);
    a=AreaOfCircle(r);
    printf("%.2f",a);
}
int AreaOfCircle(int r)
{
    float area;
    area=3.14*r*r;
    return area;
}