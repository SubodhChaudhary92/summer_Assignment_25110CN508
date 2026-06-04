/*Write a program to Generate Fibonacci series.*/
#include<stdio.h>

int main()
{
    int a=-1,b=1,c,N;
    printf("Enter the number of terms : ");
    scanf("%d",&N);
    printf("Fibonacci Series : ");
    for(;N;N--)
    {
        c=a+b;
        a=b;
        b=c;
        printf("%d ",c);
    }

    return 0;
}