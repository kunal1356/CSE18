#include<stdio.h>
#include<math.h>
int main()
{
    int x,y,sum=0;
    printf("Enter the num and power ");
    scanf("%d %d",&x,&y);
    sum=pow(x,y);
    printf("value of x is %d",sum);
}