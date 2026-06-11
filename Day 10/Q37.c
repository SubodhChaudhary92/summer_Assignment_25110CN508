/*Write a program to Print star pyramid.*/
#include<stdio.h>

int main()
{
    int i,j,n;
    printf("Enter the number of line : ");
    scanf("%d",&n);
    for(i=1; i<=n; i++)
    {
        for(j=-n+1; j<=n-1; j++)
            if(j<i&&j>-i)
                printf(" * ");
            else
                printf("   ");
        printf("\n");
    }
    return 0;
}