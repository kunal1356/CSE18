#include<stdio.h>
void PrintArray(int (*)[],int);
void MULTI(int (*)[],int (*)[],int);
int main()
{
    int size,array1[10][10],array2[10][10],i,j;
    printf("Enter the size of matrices ");
    scanf("%d",&size);
    printf("Enter the elements in array1 ");
    PrintArray(array1,size);
    printf("Enter the elements in array2 ");
    PrintArray(array2,size);
    printf("MULTIPLICATION OF 2 ARRAY'S\n");
    MULTI(array1,array2,size);
}
void PrintArray(int (*p)[10],int size)
{
    int i,j;
    for(i=0;i<size;i++)
    {
        for(j=0;j<size;j++)
        scanf("%d",*(p+i)+j);
    }
    for(i=0;i<size;i++)
    {
        for(j=0;j<size;j++)
        printf("%d ",*(*(p+i)+j));
        printf("\n");
    }
}
void MULTI(int(*p)[10],int(*q)[10],int size)
{
    int i,j;
    for(i=0;i<size;i++)
    {
        for(j=0;j<size;j++)
        printf("%d ",(*(*(p+i)+j)) * (*(*(q+i)+j)) );
        printf("\n");
    }
}
