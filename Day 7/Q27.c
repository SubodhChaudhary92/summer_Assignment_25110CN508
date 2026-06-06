/*Write a program to Recursive sum of digits.*/
#include<stdio.h>
int sod(int n);
int main()
{
    int n;
    printf("Enter the number : ");
    scanf("%d",&n);
    printf("Sum of digits of the number %d is %d.",n,sod(n));
    return 0;
}
int sod(int n)
{
    if(n>9)
        return n%10+sod(n/10);
    else 
        return n;    
}