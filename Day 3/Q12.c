/*Write a program to Find LCM of two numbers.*/
#include <stdio.h>
int main()
{
    int a, b, r;
    printf("Enter 1st number : ");
    scanf("%d", &a);
    printf("Enter 2nd number : ");
    scanf("%d", &b);
    printf("LCM of %d and %d ", a, b);
    if (b > a)
        a = a + b, b = a - b, a = a - b;
    for (r = a; r % b; r = r + a);
    printf("is %d.", r);
    return 0;
}