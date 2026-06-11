/*Write a program to Write function to find factorial.*/
#include<stdio.h>
int fact(int n);
int main()
{
    int n;
    printf("Enter number : ");
    scanf("%d",&n);
    printf("Factorial of %d is %d.",n,fact(n));
    return 0;
}
int fact(int n)
{
    int p=1;
    for(; n; n--)
        p=p*n;
    return p;
}