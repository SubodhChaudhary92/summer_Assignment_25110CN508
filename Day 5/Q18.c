/*Write a program to Check strong number.*/
#include<stdio.h>
int factorial(int n);
int main()
{
    int n,k,s=0;
    printf("Enter the number : ");
    scanf("%d",&n);
    k=n;
    for(; n; n/=10)
        s=s+factorial(n%10);
    if(k==s)
        printf("%d is a strong number.",k);
    else
        printf("%d is not a strong number.",k);
    return 0;
}
int factorial(int n)
{
    int f=1;
    for(; n; n--)
        f=f*n;
    return f;
}