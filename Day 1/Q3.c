/*Write a program to Find factorial of a number.*/
#include<stdio.h>
int main()
{
    int n,f=1;
    printf("Enter the number of which you want the factorial : ");
    scanf("%d",&n);
    for (;n>0;n--)
        f*=n;
    printf("Factorial is %d.", f);
    return 0;
}
