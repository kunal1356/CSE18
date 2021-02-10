#include<stdio.h>
int main()
{
    int num,x=3,count=0,num1;
    printf("Enter a range which have 2 bit set or not");
    scanf("%d",&num);
    while(num)
    {
        count=0;
        num1=x;
        while(num1)
        {
            if(num1%2==1)
            count++;
            num1=num1/2;
        }
        if(count==2)
        {
            printf("%d ",x);
            num--;
        }
        x++;
    }
}