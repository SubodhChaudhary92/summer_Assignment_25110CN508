/*Write a program to Convert decimal to binary.*/
#include<stdio.h>
void bin(int n);
int main()
{
    int n;
    printf("Enter the number : ");
    scanf("%d",&n);
    printf("Binary of %d is : ",n);
    if(n)
        bin(n);
    else
        printf("0");
    return 0;
}
void bin(int n)
{
    if(n>0)
    {
        bin(n/2);
        printf("%d",n%2);
    }
}