/*Write a program to Write function to check prime.*/
#include<stdio.h>
void CheckPrime(int n);
int main()
{
    int n;
    printf("Enter number : ");
    scanf("%d",&n);
    CheckPrime(n);
    return 0;
}
void CheckPrime(int n)
{
    int i,c=0;
    for(i=2; i<n; i++)
        if(n%i==0)
        {
            c=c+1;
            break;
        }
    if(c)
        printf("%d is not a prime number.",n);
    else
        printf("%d is a prime number.",n);
}