#include<stdio.h>
void even(int [],int);
int odd(int [],int);
int main()
{
    int size,i,arr[20],num;
    printf("Enter the size of array ");
    scanf("%d",&size);
    printf("Enter the elements ");
    for(i=0;i<size;i++)
    scanf("%d",&arr[i]);
    even(arr,size);
    num=odd(arr,size);
    printf("Odd number sum is %d",num);
}
void even(int arr[],int size)
{
    int i,sum=0;
    for(i=0;i<size;i++)
    {
        if(arr[i]%2==0)
        sum=sum+arr[i];
    }
    printf("Even number sum is %d\n",sum);
}
int odd(int arr[],int size)
{
    int j,sum=0;
    for(j=0;j<size;j++)
    {
        if(arr[j]%2!=0)
        sum=sum+arr[j];
    }
    return sum;
}