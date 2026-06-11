/*Write a program to Write function to find maximum.*/
#include<stdio.h>
int grt(int a, int b);
int main()
{
    int a,b;
    printf("Enter first number : ");
    scanf("%d",&a);
    printf("Enter second number : ");
    scanf("%d",&b);
    printf("The greater number among %d and %d is %d.",a,b,grt(a,b));
    return 0;
}
int grt(int a, int b)
{
    if(a>b)
    return a;
    else 
    return b;
}