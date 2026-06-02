/*Write a program to Print prime numbers in a range.*/
#include<stdio.h>
int main()
{
    int a,b,i,n,count;
    printf("Enter the Range : \n");
    printf("Enter Lower limit : ");
    scanf("%d",&a);
    printf("Enter upper limit : ");
    scanf("%d",&b);
    for(n=a+1; n<b; n++)
    {
        count=0;
        for(i=2; i<n; i++)
            if(n%i==0)
            {
                count++;
                break;
            }
        if(count==0)
            printf("%d ",n);
    }
    return 0;
}