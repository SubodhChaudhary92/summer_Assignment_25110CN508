/*Write a program to Check whether a number is  prime.*/
#include<stdio.h>
int main()
{
    int i,n,count = 0;
    printf("Enter the number : ");
    scanf("%d",&n);
    for(i=2; i<n; i++)
        if(n%i==0)
        {
            count++;
            break;
        }
    if(count>0)
        printf("%d is a Composite number.",n);
    else
        printf("%d is a Prime number.",n);
    return 0;
}