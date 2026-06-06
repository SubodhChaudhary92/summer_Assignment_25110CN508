/*Write a program to Convert binary to decimal.*/
#include<stdio.h>
int main()
{
    int i,n,s=0,p,k;
    printf("Enter the number : ");
    scanf("%d",&n);
    printf("Decimal of %d is : ",n);
    for(i=0; n; n/=10,i++)
    {
        p=1;
        for(k=i; k; k--)
            p=p*2;
        s=s+(n%10)*p;
    }
    printf("%d",s);
    return 0;
}