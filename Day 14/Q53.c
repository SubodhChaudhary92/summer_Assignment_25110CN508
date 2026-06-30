/*Write a program to Linear search.*/
#include<stdio.h>
int main()
{
    int arr[50],i,n,f;
    printf("Enter number of terms (max 50) you want to enter : ");
    scanf("%d",&n);
    for(i=0; i<n; i++)
    {
        printf("Enter element %d : ",i+1);
        scanf("%d",&arr[i]);
    }
    printf("Enter the element you want to search : ");
    scanf("%d",&f);
    printf("%d is at position(s) : ",f);
    for(i=0; i<n; i++)
    {
        if(arr[i]==f)
            printf("%d ",i+1);
    }
    return 0;
}