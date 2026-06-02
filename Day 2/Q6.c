/*Write a program to Reverse a number.*/
#include <stdio.h>
int main()
{
    int n = 0, N;
    printf("Enter the number : ");
    scanf("%d", &N);
    printf("The reverse of the number %d ", N);
    for (; N; N /= 10)
        n = n * 10 + N % 10;
    printf("is %d.", n);
    return 0;
}