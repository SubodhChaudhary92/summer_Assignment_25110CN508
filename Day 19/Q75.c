/*Write a program to Transpose matrix.*/
#include<stdio.h>
#include<stdlib.h>
int main()
{
    int i,j,mat1[10][10],mat[10][10],r1,c1;
    printf("Enter the number of rows in the First Matrix : ");
    scanf("%d",&r1);
    printf("Enter the number of columns in the First Matrix : ");
    scanf("%d",&c1);
    printf("Enter the Matrix : \n");
    for(i=0; i<r1; i++)
        for(j=0; j<c1; j++)
        {
            printf("Enter the element at position %d row, %d column : ",i+1,j+1);
            scanf("%d",&mat1[i][j]);
        }
    for(i=0; i<r1; i++)
        for(j=0; j<c1; j++)
            mat[j][i]=mat1[i][j];
    printf("Transpose of the given Matrix is : \n");
    for(i=0; i<c1; i++)
    {
        for(j=0; j<r1; j++)
            printf(" %d ", mat[i][j]);
        printf("\n");
    }
    return 0;
}