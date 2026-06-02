/*Write a program to Find GCD of two numbers.*/
#include<stdio.h>
int main()
{
    int a,b,r=1;
    printf("Enter 1st number : ");
    scanf("%d",&a);
    printf("Enter 2nd number : ");
    scanf("%d",&b);
    printf("GCD of %d and %d ",a,b);
    if(b>a)
        a=a+b,b=a-b,a=a-b;
    for(; r;)
    {
        r=a%b;
        a=b;
        b=r;
    }
    printf("is %d.",a);
    return 0;
}