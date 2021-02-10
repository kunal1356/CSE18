#include<stdio.h>
int main()
{
    int num,i,sum=0;
    printf("Enter a number");
    scanf("%d",&num);
    for(i=1;i<=10;i++)
    {
        sum=i*num;
        printf("%d X %d = %d\n",num,i,sum);
    }
}