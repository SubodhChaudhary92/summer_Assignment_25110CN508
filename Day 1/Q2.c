/*Write a program to Print multiplication table of a given number.*/
#include <stdio.h>
int main()
{
    int n, p;
    printf("Enter the number of which you want to get the table : ");
    scanf("%d", &n);
    for (p = 1; p < 11; p++)
        printf("%d * %d = %d\n", p, n,n * p);
    return 0;
}