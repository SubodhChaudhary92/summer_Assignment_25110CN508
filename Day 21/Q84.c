/*Write a program to Convert lowercase to uppercase.*/
#include<stdio.h>
int main()
{
    int i,temp,n;
    char arr[50];
    printf("Enter a single word string (max characters 50) : ");
    scanf("%s",&arr);
    for(n=0; arr[n]; n++);
    for(i=0; i<n; i++)
    {
        if(arr[i]>='a'&&arr[i]<='z')
        {
            arr[i]=arr[i]+'A'-'a';
        }

    }
    printf("Now the string is : ");
    for(i=0; i<n; i++)
    {
        printf("%c",arr[i]);
    }
    return 0;
}