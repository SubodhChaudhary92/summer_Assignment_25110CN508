/*Write a program to Write function for perfect number.*/
#include <stdio.h>
void checkPerfect(int n);
int main()
{
    int n;
    printf("Enter the number : ");
    scanf("%d",&n);
    checkPerfect(n);
    return 0;
}
void checkPerfect(int n)
{
    int i, s=0;
    for(i=1;i<n;i++)
        if(n%i==0)
            s+=i;
    if(s==n)
        printf("%d is a perfect number.",n);
    else
        printf("%d is not a perfect number.",n);
}