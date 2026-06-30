/*Write a program to Bubble sort.*/
#include<stdio.h>
int main ()
{
    int arr[50],i,j,t,s,n;
    printf("Enter number of element you want to enter in the array : ");
    scanf("%d",&n);
    for(i=0; i<n; i++)
    {
        printf("Enter element %d : ",i+1);
        scanf("%d",&arr[i]);
    }
    printf("Your entered Array is :\n");
    for(i=0; i<n; i++)
        printf(" %d",arr[i]);
    for(j=1; j<n-1; j++)
    {
        s=0;
        for(i=0; i<n-1; i++)
        {
            if(arr[i]>arr[i+1])
            {
                t=arr[i+1];
                arr[i+1]=arr[i];
                arr[i]=t;
                s=s+1;
            }
        }
        if(s==0)
            break;
    }
    printf("\nSorted Array is : \n");
    for(i=0; i<n; i++)
        printf(" %d",arr[i]);
    return 0;
}