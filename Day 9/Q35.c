/*Write a program to Print repeated character pattern.*/
#include<stdio.h>
int main()
{
    int i,j,n;
    printf("Enter the number of lines you want to print : ");
    scanf("%d",&n);
    for(i='A'; n; n--,i++)
    {
        for(j='A'; j<=i; j++)
            printf("%c ",i);
        printf("\n");
    }
    return 0;
}