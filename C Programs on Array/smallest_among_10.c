#include<stdio.h>
int smallest(int[],int);
int main()
{
    int size,i,array[20],num;
    printf("Enter the size of array ");
    scanf("%d",&size);
    printf("Enter the elements of an array ");
    for(i=0;i<size;i++)
    scanf("%d",&array[i]);
    num=smallest(array,size);
    printf("at Position '%d'",num);
}
int smallest(int array[],int size)
{
    int i,small=9999,j;
    for(i=0;i<size;i++)
    {
        if(array[i]<small)
        {
            small=array[i];
            j=i;
        }
    }
    printf("Smallest number in array is '%d' ",small);
    return j;
}