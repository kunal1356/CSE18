#include<stdio.h>
#include<math.h>
int main()
{
    int num,i,dig,a,sum,tot=0;
    printf("Enter a number ");
    scanf("%d",&num);
    i=num;
    dig=(int)log10(num)+1;
    while(num!=0)
    {
        sum=0;
        a=num%10;
        sum=pow(a,dig);
        tot=tot+sum;
        num=num/10;
    }
    if(i==tot)
    printf("%d is a Armstrong number",tot);
    else
    printf("%d is not a Armstrong number",tot);
}