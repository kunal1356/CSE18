#include<stdio.h>
void print(int *,int);
int main()
{
    int size,n,i,j,array[10];
    printf("Enter the size of array ");
    scanf("%d",&size);
    printf("Enter the position ");
    scanf("%d",&n);
    printf("Enter the elements of array ");
    for(i=0;i<size;i++)
        scanf("%d",&array[i]);
    print(array,size);
        printf("\n");
        while(n!=0)
        {
            j=array[0];
            for(i=0;i<size-1;i++)
            array[i]=array[i+1];
            array[size-1]=j;
            n--;
        }
    print(array,size);
}
void print(int *p,int size)
{
    int i;
    for(i=0;i<size;i++)
        printf("%d ",*(p+i));
}