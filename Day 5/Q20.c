/*Write a program to Find largest prime factor.*/
#include<stdio.h>
int main()
{
    int i,n,c,l,k;
    printf("Enter the number : ");
    scanf("%d",&n);
    for(i=2; i<=n; i++)
    {
        c=0;
        for(k=2; k<i; k++)
        {
            if(i%k==0)
            {
                c=c+1;
                break;
            }
        }
        if(c==0)
            if(n%i==0)
                l=i;
    }
    printf("Largest Prime factor of %d is %d.",n,l);
    return 0;
}