/*Write a program to Print character triangle.*/
#include<stdio.h>

int main()
{
    int i,j,n;
    printf("Enter the number of lines you want to print : ");
    scanf("%d",&n);
    for(i='A';n; i++,n--)
    {
        for(j='A'; j<=i; j++)
            printf("%c ",j);
        printf("\n");
    }
    return 0;
}