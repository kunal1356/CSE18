#include<stdio.h>
int main()
{
    int x,y,i,j,sumx=0,sumy=0,count=0;
    printf("Enter two numbers to find it is co prime or not ");
    scanf("%d %d",&x,&y);
    for(i=1;i<=x;i++)
    {
        if(x%i==0)
        sumx=i;
        for(j=i;j<=y;j++)
        {
            if(y%j==0)
            {
            sumy=j;
            if(sumx==sumy)
            count++;
            }
        }
    }
    if(count==1)
    printf("it is co-prime");
    else
    printf("it is not co-ptime");
}