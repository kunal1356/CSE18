#include<stdio.h>
int main()
{
    int n,num,i,sum=0,j;
    printf("Choose any one\n1.Even numbers SUM\n2.Odd numbers SUM\n");
    printf("Enter your choice!! ");
    scanf("%d",&n);
    switch(n)
    {
        case 1:
        printf("Enter number ");
        scanf("%d",&num);
        for(i=1;i<=num;i++)
        {
            if(i%2==0)
                sum=sum+i;
        }
        printf("SUM of Even N natural numbers %d",sum);
        break;
        case 2:
        printf("Enter number ");
        scanf("%d",&num);
        for(j=1;j<=num;j++)
        {
            if(j%2!=0)
                sum=sum+j;
        }
        printf("SUM of Odd N natural numbers %d",sum);
        break;
        default :
        printf("NOT VALID!!!!!!!");
    }
}