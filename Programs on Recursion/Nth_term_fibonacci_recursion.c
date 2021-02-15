#include<stdio.h>
int fibo(int);
int main()
{
    int num,k;
    printf("enter a number ");
    scanf("%d",&num);
    k=fibo(num);
    printf("%dth term is %d",num,k);
}
int fibo(int num)
{
    if(num==1 || num==2)
    return 1;
    return(fibo(num-1)+fibo(num-2));
}