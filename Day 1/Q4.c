/*Write a program to Count digits in a number.*/
#include <stdio.h>
int main()
{
    int n, count = 1;
    printf("Enter the number : ");
    scanf("%d", &n);
    for (; n >= 10; n /= 10)
        count += 1;
    printf("Total number of digits is : %d.", count);
    return 0;
}