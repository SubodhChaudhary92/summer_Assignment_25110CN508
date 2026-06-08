/*Write a program to Print number triangle.*/
#include<stdio.h>

int main()
{
    int i,j,n;
    printf("Enter the number of lines you want to print : ");
    scanf("%d",&n);
    for(i=1;n; i++,n--)
    {
        for(j=1; j<=i; j++)
            printf("%d ",j);
        printf("\n");
    }
    return 0;
}