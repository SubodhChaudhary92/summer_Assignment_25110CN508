/*Write a program to Write function for palindrome.*/
#include <stdio.h>
void checkPalindrome(int N);
int main()
{
    int N;
    printf("Enter the number : ");
    scanf("%d", &N);
    checkPalindrome(N);
    return 0;
}
void checkPalindrome(int N)
{
    int n = 0, m;
    m = N;
    for (; N; N /= 10)
        n = n * 10 + N % 10;
    printf("The number %d is ", m);
    if (n == m)
        printf("a palindrome.");
    else
        printf("not a palindrome.");
}