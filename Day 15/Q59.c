/*Write a program to Rotate array right.*/
#include<stdio.h>
int main()
{
    int i,h,r,n,arr[50];
    printf("Enter the number of elements (maximum 50) you want to enter : ");
    scanf("%d",&n);
    for(i=0; i<n; i++)
    {
        printf("Enter element %d : ",i+1);
        scanf("%d",&arr[i]);
    }
    printf("Your array is : ");
    for(i=0; i<n; i++)
        printf(" %d ",arr[i]);
    printf("\nEnter the number of position(s) by which you want to rotate the array to right : ");
    scanf("%d",&r);
    printf("After rotating the array by %d position(s) you will get the following array : \n",r);
    r=r%n; //this will reduce the operation if number of position by which array is to be rotated is greater than length of array
    for(; r; r--)
    {
        h=arr[n-1];
        for(i=n-1; i; i--)
            arr[i]=arr[i-1];
        arr[0]=h;
    }
    for(i=0;i<n;i++)
    printf("%d ",arr[i]);
    return 0;
}