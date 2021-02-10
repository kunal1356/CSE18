#include<stdio.h>
#include<math.h>
int main()
{
    int num,sum=0;
    printf("Enter the number");
    scanf("%d",&num);
    sum= (int) log10(num)+1;
    printf("count %d",sum);
}