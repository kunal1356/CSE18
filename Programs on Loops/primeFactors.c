#include<stdio.h>
int main()
{
    int num,i=2,count=0;
    printf("Enter a number to find out their Prime Factors ");
    scanf("%d",&num);
    while(num!=1)
    {
        count=0;
        if(num%i==0)
        {
            num=num/i;
            printf("%d,",i);
            count++;
        }
        if(count==0)
        i++;
    }
}