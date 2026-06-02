/*Write a program to Find sum of digits of a number.*/
#include <stdio.h>
int main()
{
    int n = 0, N;
    printf("Enter the number : ");
    scanf("%d", &N);
    printf("Sum of digits present in the number %d ", N);
    for (; N > 0; N /= 10)
        n += N % 10;
    printf("is %d", n);
    return 0;
}