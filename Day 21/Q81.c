/*Write a program to Find string length without strlen().*/
#include<stdio.h>
int main()
{
    int n;
    char arr[50];
    printf("Enter a single word string (max characters 50) : ");
    scanf("%s",&arr);
    for(n=0; arr[n]; n++);
    printf("Length of the string is : ");
    printf("%d",n);
    return 0;
}