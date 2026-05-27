/*Write a program to Calculate sum of first N natural numbers.*/
#include <stdio.h>
int main()
{
    int n, k, sum = 0;
    printf("Enter the number upto which you want the sum : ");
    scanf("%d", &n);
    k = n;
    for (;n;n--)
        sum += n;
    printf("Sum of first %d natural numbers is %d.", k, sum);
    return 0;
}