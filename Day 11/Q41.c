/*Write a program to Write function to find sum of two numbers.*/
#include<stdio.h>
int son(int a, int b);
int main()
{
    int a,b;
    printf("Enter first number : ");
    scanf("%d",&a);
    printf("Enter second number : ");
    scanf("%d",&b);
    printf("Sum of %d and %d is %d.",a,b,son(a,b));
    return 0;
}
int son(int a, int b)
{
    return a+b;
}