/*Write a program to Print reverse star pattern.*/
#include<stdio.h>
int main()
{
    int i,j;
    printf("Enter the number of lines you want to print : ");
    scanf("%d",&i);
    for(; i; i--)
    {
        for(j=i; j; j--)
            printf(" * ");
        printf("\n");
    }
    return 0;
}