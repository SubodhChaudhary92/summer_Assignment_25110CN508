/*Write a program to Find x^n without pow().*/
#include<stdio.h>
int main()
{
    int a,n,p=1;
    printf("Enter Base : ");
    scanf("%d",&a);
    printf("Enter Exponent : ");
    scanf("%d",&n);
    printf("%d to the power %d is :",a,n);
    for(; n; n--)
        p=p*a;
    printf(" %d",p);    
    return 0;
}