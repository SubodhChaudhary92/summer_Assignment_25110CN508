/*Write a program to Write function for Fibonacci.*/
#include<stdio.h>
void fibonacci(int N);
int main()
{
    int N;
    printf("Enter the number of terms : ");
    scanf("%d",&N);
    fibonacci(N);
    return 0;
}
void fibonacci(int N)
{
    int a=-1,b=1,c;
    printf("Fibonacci Series : ");
    for(;N;N--)
    {
        c=a+b;
        a=b;
        b=c;
        printf("%d ",c);
    }
}