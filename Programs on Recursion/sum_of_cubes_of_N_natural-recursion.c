#include<stdio.h>
int cube(int);
int main()
{
    int num;
    printf("Enter a number to find its cube of sum ");
    scanf("%d",&num);
    num=cube(num);
    printf("sum of cubes = %d",num);
}
int cube(int num)
{
    if(num==1)
    return 1;
    return( (num*num*num) + cube(num-1) );
}