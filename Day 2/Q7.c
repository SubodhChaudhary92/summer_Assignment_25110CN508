/*Write a program to Find product of digits.*/
#include <stdio.h>
int main()
{
    int p = 1, n;
    printf("Enter the number : ");
    scanf("%d", &n);
    printf("Product of the digits present in the number %d ",n);
    do{
        p *= n % 10;
        n/=10;
    } 
    while(n);
    printf("is %d.", p);
    return 0;
}