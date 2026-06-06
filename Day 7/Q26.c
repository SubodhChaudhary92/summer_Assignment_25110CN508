/*Write a program to Recursive Fibonacci.*/
#include<stdio.h>
void fibo(int n,int a,int b);
int main()
{
    int n;
    printf("Enter the number : ");
    scanf("%d",&n);
    printf("Fibonacci series upto %d terms : \n",n);
    fibo(n,-1,1);
    return 0;
}
void fibo(int n,int a,int b)
{
    int k;
    if(n>0)
    {
        k=a+b;
        printf("%d ",k);
        fibo(--n,b,k);
    }
}