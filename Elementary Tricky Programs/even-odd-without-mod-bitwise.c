#include<stdio.h>
int main()
{
    int num;
    printf("Enter a number for EVEN or ODD ");
    scanf("%d",&num);
    if(num/2*2==num)                        // if num is 9 suppose then it gives 1*2=2 and 2!=9 so condition is false 
    printf("Number is EVEN");
    else                                    // and else statement will work.
    printf("Number is ODD");
}