/*Write a program to Write function for Armstrong.*/
#include <stdio.h>
void checkArmstrong(int n);
int main()
{
    int n;
    printf("Enter the number : ");
    scanf("%d", &n);
    checkArmstrong(n);
    return 0;
}
void checkArmstrong(int n)
{
    int a, p, c, s = 0, k, count = 1;
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
}