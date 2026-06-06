/*Write a program to Recursive reverse number.*/
#include<stdio.h>
void ron(int n);
int main()
{
    int n;
    printf("Enter the number : ");
    scanf("%d",&n);
    printf("Reverse of digits of the number %d is : ",n);
    if(n)
        ron(n);
    else
        printf("0");
    return 0;
}
void ron(int n)
{
    if(n)
    {
        printf("%d",n%10);
        ron(n/10);
    }
}