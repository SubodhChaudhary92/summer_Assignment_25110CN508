/*Write a program to Check Armstrong number.*/
#include <stdio.h>
int main()
{
    int n, a, p, c, s = 0, k, count = 1;
    printf("Enter the number : ");
    scanf("%d", &n);
    k = n;
    for (; n >= 10; n /= 10)
        count += 1;
    a = k;
    c = count;
    for (; k; k /= 10)
    {
        n = k % 10;
        p = 1;
        for (; count; count--)
            p = p * n;
        count = c;
        s = s + p;
    }
    if (a == s)
        printf("%d is a armstrong number.", a);
    else
        printf("%d is not a armstrong number.", a);
    return 0;
}