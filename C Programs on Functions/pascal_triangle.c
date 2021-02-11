#include<stdio.h>
void pascal(int);
int main()
{
    int rows;
    printf("Enter number of rows ");
    scanf("%d",rows);
    pascal(rows);
}
//Take_Something-Return_Nothing:
void pascal(int rows)
{
    int i,j,space,c=1;
    for(i=0;i<rows;i++)
    {
        for(space=1;space<rows-i;space++)
        printf(" ");
        for(j=0;j<=i;j++)
        {
            if(j==0 || i==0)
            c=1;
            else
            c=c*(i-j+1)/j;
            printf("%d",c);
        }
        printf("\n");
    }
}