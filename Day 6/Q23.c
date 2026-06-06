/*Write a program to Count set bits in a number.*/
#include<stdio.h>
int main()
{
    int n,c=0;
    printf("Enter the number : ");
    scanf("%d",&n);
    printf("Set bits present in the number %d is : ",n);
    for(; n; n/=2)
    {
        if(n%2)
            c+=1;
    }
    printf("%d",c);
    return 0;
}