#include<stdio.h>
int main()
{
    int num,i=0,sum,j=1;
    printf("Enter a number for fibonacci series ");
    scanf("%d",&num);
    printf("%d,%d,",i,j);
    while(num-2!=0)
    {
        sum=i+j;
        printf("%d,",sum);
        if(i<j)
            i=sum;
        else
            j=sum;
        num--;
    }
}