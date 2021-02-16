#include<stdio.h>
void greatest(int[],int);
int main()
{
    int size,i,array[20];
    printf("Enter the size of array ");
    scanf("%d",&size);
    printf("Enter the elements of array ");
    for(i=0;i<size;i++)
    scanf("%d",&array[i]);
    greatest(array,size);
}
void greatest(int array[],int size)
{
    int i,great=0,j;
    for(i=0;i<size;i++)
    {
        if(array[i]>great)
        {
            great=array[i];
            j=i;
        }
    }
    printf("Greatest number in array is '%d' at Position '%d' ",great,j);
}