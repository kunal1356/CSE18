#include<stdio.h>
void printArray(int (*)[],int);
int main()
{
    int size,i,j,array1[10][10],array2[10][10];
    printf("Enter the size of matrices ");
    scanf("%d",&size);
    printf("Enter elements in array1 ");
    printArray(array1,size);
    printf("Enter elements in array2 ");
    printArray(array2,size);
    printf("Addition of 2 matrix\n");
    for(i=0;i<size;i++)
    {
        for(j=0;j<size;j++)
        printf("%d ",array1[i][j]+array2[i][j]);
        printf("\n");
    }
}
void printArray(int (*p)[10],int size)
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