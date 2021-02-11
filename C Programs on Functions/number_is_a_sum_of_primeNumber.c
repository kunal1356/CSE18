#include<stdio.h>
int main()
{
    int num,i,sum,counts=0,j,k,counti=0;
    printf("Enter a number to find out sum ");
    scanf("%d",&num);
    for(i=1;i<=num/2;i++)
    {
        counts=0;
        for(j=1;j<=i;j++)
        {
            if(i%j==0)
            counts++;
        }
        if(counts==2)
        {
        sum=num-i;
            for(k=1;k<=sum;k++)
            {
                if(sum%k==0)
                counti++;
            }
            if( counti==2 && i+sum==num )
            printf("%d and %d\n",i,sum);
            counti=0;
        }
    }
}