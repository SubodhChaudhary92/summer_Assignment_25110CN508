/*Write a program to Check symmetric matrix.*/
#include<stdio.h>
#include<stdlib.h>
int main()
{
    int i,j,s=0,mat1[10][10],r1,c1;
    printf("Enter the number of rows in the Matrix : ");
    scanf("%d",&r1);
    printf("Enter the number of columns in the Matrix : ");
    scanf("%d",&c1);
    if(r1!=c1)
    {
        printf("For a matrix to be Symmetric rows and columns should be equal.");
        exit(0);
    }
    printf("Enter the Matrix : \n");
    for(i=0; i<r1; i++)
        for(j=0; j<c1; j++)
        {
            printf("Enter the element at position %d row, %d column : ",i+1,j+1);
            scanf("%d",&mat1[i][j]);
        }
    printf("Your Matrix is : \n");
    for(i=0; i<r1; i++)
    {
        for(j=0; j<c1; j++)
            printf(" %d ",mat1[i][j]);
        printf("\n");
    }
    for(i=0; i<r1; i++)
        for(j=0; j<i; j++)
            if(mat1[i][j]!=mat1[j][i])
                break;
    if(i==r1&&j==c1-1)
        printf("Given matrix is Symmetric.");
    else
        printf("Given matrix is not Symmetric.");
    return 0;
}