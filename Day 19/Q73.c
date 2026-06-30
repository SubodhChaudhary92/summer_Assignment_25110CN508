/*Write a program to Add matrices.*/
#include<stdio.h>
#include<stdlib.h>
int main()
{
    int i,j,mat1[10][10],mat2[10][10],mat[10][10],r1,r2,c1,c2;
    printf("Enter the number of rows in the First Matrix : ");
    scanf("%d",&r1);
    printf("Enter the number of columns in the First Matrix : ");
    scanf("%d",&c1);
    printf("Enter the First Matrix : \n");
    for(i=0; i<r1; i++)
        for(j=0; j<c1; j++)
        {
            printf("Enter the element at position %d row, %d column : ",i+1,j+1);
            scanf("%d",&mat1[i][j]);
        }
    printf("Enter the number of rows in the Second Matrix : ");
    scanf("%d",&r2);
    printf("Enter the number of columns in the Second Matrix : ");
    scanf("%d",&c2);
    printf("Enter the Second Matrix : \n");
    for(i=0; i<r2; i++)
        for(j=0; j<c2; j++)
        {
            printf("Enter the element at position %d row, %d column : ",i+1,j+1);
            scanf("%d",&mat2[i][j]);
        }
    if(r1!=r2||c1!=c2)
    {
        printf("Order mismatch, Addition can't be performed.");
        exit(0);
    }
    for(i=0; i<r1; i++)
        for(j=0; j<c1; j++)
            mat[i][j]=mat1[i][j]+mat2[i][j];
    printf("Sum of the given Matrices is : \n");
    for(i=0; i<r1; i++)
    {
        for(j=0; j<c1; j++)
            printf(" %d ", mat[i][j]);
        printf("\n");
    }
    return 0;
}