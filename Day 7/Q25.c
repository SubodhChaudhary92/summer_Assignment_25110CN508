/*Write a program to Recursive factorial.*/
#include<stdio.h>
int factorial(int n);
int main()
{
    int n;
    printf("Enter the number : ");
    scanf("%d",&n);
    printf("Factorial of %d is %d.",n,factorial(n));
    return 0;
}
int factorial(int n)
{
    int f=1;
    for(; n; n--)
        f=f*n;
    return f;
}