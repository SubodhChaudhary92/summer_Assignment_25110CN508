/*Write a program to Frequency of an element.*/
#include<stdio.h>
int main()
{
    int arr[50],i,n,f,c=0;
    printf("Enter number of terms (max 50) you want to enter : ");
    scanf("%d",&n);
    for(i=0; i<n; i++)
    {
        printf("Enter element %d : ",i+1);
        scanf("%d",&arr[i]);
    }
    printf("Enter the element you want to search : ");
    scanf("%d",&f);
    for(i=0; i<n; i++)
    {
        if(arr[i]==f)
            c=c+1;
    }
    printf("%d is %d times in the list.",f,c);
    return 0;
}