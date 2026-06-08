/*Write a program to Print half pyramid pattern.*/
#include<stdio.h>

int main()
{
    int i,j,n;
    printf("Enter the number of lines you want to print : ");
    scanf("%d",&n);
    for(i=1;n; i++,n--)
    {
        for(j=i; j; j--)
            printf(" * ");
        printf("\n");
    }
    return 0;
}