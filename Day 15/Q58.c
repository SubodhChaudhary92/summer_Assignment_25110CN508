/*Write a program to Rotate array left.*/
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
    printf("Enter the number of position(s) by which you want to rotate the array to left : ");
    scanf("%d",&r);
    printf("After rotating the array by %d position(s) you will get the following array : \n",r);
    r=r%n; //this will reduce the operation if number of position by which array is to be rotated is greater or equal to the length of array
    for(; r; r--)
    {
        h=arr[0];
        for(i=0; i<n-1; i++)
            arr[i]=arr[i+1];
        arr[n-1]=h;
    }
    for(i=0;i<n;i++)
    printf("%d ",arr[i]);
    return 0;
}