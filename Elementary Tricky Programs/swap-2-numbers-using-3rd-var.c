#include<stdio.h>
int main()
{
    int a,b,c;
    printf("enter 2 numbers for swapping\n");
    printf("A=");                               
    scanf("%d",&a);
    printf("B=");
    scanf("%d",&b);
    c=a;                                //value of a goes in c.
    a=b;                                // value of b goes in a.                                    
    b=c;                                //value of c goes in b.
    printf("After Swapping\n");
    printf("A=%d B=%d",a,b);
}