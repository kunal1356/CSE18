#include<stdio.h>
int main()
{
    int a,b,i,big,up=0;
    printf("Enter two numbers ");
    scanf("%d %d",&a,&b);
    for(i=1;i<=a;i++)
    {
        if(a%i==0 && b%i==0)
        {
            big=i;
            if(big>up)
            {
                up=big;
            }
        }
    }
    printf("HCF is %d",up);
}