#include<stdio.h>
int main()
{
    int num1,num2,i,count=0;
    printf("Enter 2 numbers to find prime numbers ");
    scanf("%d %d",&num1,&num2);
    if(num2>num1)
    {
        while(num1!=num2+1)
        {
            count=0;
            for(i=1;i<=num2;i++)
            {
                if(num1%i==0)
                count++;
            }
        if(count==2)
        printf("%d ",num1);
        num1++;
        }
    }
    else
    {
        while(num2!=num1+1)
        {
            count=0;
            for(i=1;i<=num1;i++)
            {
                if(num2%i==0)
                count++;
            }
            if(count==2)
            printf("%d ",num2);
            num2++;
        }
    }
}