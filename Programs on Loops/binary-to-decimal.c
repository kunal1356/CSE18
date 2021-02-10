#include<stdio.h>
#include<math.h>
int main()
{
    int n,digit=0,a,i,sum=0;
    printf("Enter a binary number ");
    scanf("%d",&n);
    digit=(int)log10(n)+1;
    while(n!=0)
    {
        for(i=0;i<digit;i++)
        {
        a=n%10;
        sum=sum+(pow(2,i)*a);
        n=n/10;
        }
    }
    printf("%d",sum);
}