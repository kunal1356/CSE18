#include<stdio.h>
#include<math.h>
int main()
{
    int a,b,c,D;
    float x,y;
    printf("Enter coefficient of x^2, x and constant term");
    scanf("%d %d %d",&a,&b,&c);
    D=b*b-4*a*c;
    if(D<0)
    {
    printf("Both roots are imaginary");
    }
    if(D==0)
    {
    printf("Both are equals");
    x=-b/(2.0*a);
    printf("Root is %f",x);
    }
    if(D>0)
    {
        printf("Roots are real and distinct");
        x=(-b+sqrt(D))/(2*a);
        y=(-b-sqrt(D))/(2*a);
        printf("\nRoots are: %f,%f",x,y);
    }
}