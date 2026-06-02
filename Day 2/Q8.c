/*Write a program to Check whether a number is palindrome.*/
#include <stdio.h>
int main()
{
    int n=0, N, m;
    printf("Enter the number : ");
    scanf("%d", &N);
    m = N;
    for (; N; N /= 10)
        n = n * 10 + N % 10;
    printf("The number %d is ",m);
    if (n == m)
        printf("a palindrome.");
    else
        printf("not a palindrome.");
    return 0;
}