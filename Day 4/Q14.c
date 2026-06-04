/*Write a program to Find nth Fibonacci term.*/
#include<stdio.h>

int main()
{
    int a=-1,b=1,c,N;
    printf("Enter the number of terms : ");
    scanf("%d",&N);
    for(;N;N--)
    {
        c=a+b;
        a=b;
        b=c;
    }
    printf("The required term of Fibonacci Series : %d",c);
    return 0;
}