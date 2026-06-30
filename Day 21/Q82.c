/*Write a program to Reverse a string.*/
#include<stdio.h>
int main()
{
    int i,temp,n;
    char arr[50];
    printf("Enter a single word string (max characters 50) : ");
    scanf("%s",&arr);
    for(n=0;arr[n];n++);
    for(i=0; i<n/2; i++)
    {
        temp=arr[i];
        arr[i]=arr[n-i-1];
        arr[n-i-1]=temp;
    }
    printf("Now the array is : ");
    for(i=0; i<n; i++)
    {
        printf("%c",arr[i]);
    }
    return 0;
}