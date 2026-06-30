/*Write a program to Find diagonal sum.*/
#include<stdio.h>
#include<stdlib.h>
int main()
{
    int i,j,s=0,mat1[10][10],r1,c1;
    printf("Enter the number of rows in the Matrix : ");
    scanf("%d",&r1);
    printf("Enter the number of columns in the Matrix : ");
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
            if(i==j)
                s=s+mat1[i][j];
    printf("Sum of diagonal elements of the given Matrix is : %d.",s);
    return 0;
}