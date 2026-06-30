/*Write a program to Reverse array.*/
#include<stdio.h>
int main()
{
    int arr[50],i,temp,n,c=0;
    printf("Enter number of terms (max 50) you want to enter : ");
    scanf("%d",&n);
    for(i=0; i<n; i++)
    {
        printf("Enter element %d : ",i+1);
        scanf("%d",&arr[i]);
    }
    printf("Your array is : ");
    for(i=0; i<n; i++)
        printf(" %d ",arr[i]);
    for(i=0; i<n/2; i++)
    {
        temp=arr[i];
        arr[i]=arr[n-i-1];
        arr[n-i-1]=temp;
    }
    printf("\nNow the array is : ");
    for(i=0; i<n; i++)
    {
        printf("%d ",arr[i]);
    }
    return 0;
}