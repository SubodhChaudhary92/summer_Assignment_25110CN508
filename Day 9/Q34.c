/*Write a program to Print reverse number triangle.*/
#include<stdio.h>
int main()
{
    int i,j;
    printf("Enter the number of lines you want to print : ");
    scanf("%d",&i);
    for(; i; i--)
    {
        for(j=1; j<=i; j++)
            printf("%d ",j);
        printf("\n");
    }
    return 0;
}