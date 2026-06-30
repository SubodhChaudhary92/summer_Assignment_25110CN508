/*Write a program to Find row-wise sum.*/
#include<stdio.h>
int main ()
{
    int mat[10][20],i,j,r,c,s;
    printf("Enter number of rows you want to enter : ");
    scanf("%d",&r);
    printf("Enter number of columns you want to enter : ");
    scanf("%d",&c);
    for(i=0; i<r; i++)
        for(j=0; j<c; j++)
        {
            printf("Enter element in row %d and column %d : ",i+1,j+1);
            scanf("%d",&mat[i][j]);
        }
    printf("Your entered Matrix is :\n");
    for(i=0; i<r; i++)
    {
        for(j=0; j<c; j++)
            printf(" %d ",mat[i][j]);
        printf("\n");
    }
    for(i=0; i<r; i++)
    {
        s=0;
        for(j=0; j<c; j++)
            s=s+mat[i][j];
        printf("Sum of all elements present in Row %d is %d.\n",i+1,s);
    }
    return 0;
}