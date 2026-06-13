/*Write a program to Find largest and smallest element.*/
#include<stdio.h>
int main ()
{
    int i,b,r,arr[50],s;
    printf("Enter number of elements you want to enter in the array : ");
    scanf("%d",&r);
    printf("Enter elements : ");
    for(i=0; i<r; i++)
    {
        printf("\nElement %d : ",i+1);
        scanf("%d",&arr[i]);
    }
    b=arr[0];
    s=arr[0];
    for(i=1; r-1; r--,i++)
    {
        if(arr[i]>b)
            b=arr[i];
        if(arr[i]<s)
            s=arr[i];
    }
    printf("Smallest element of the array is : %d\nLargest element of the array is : %d",s,b);
    return 0;
}