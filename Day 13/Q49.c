/*Write a program to Input and display array.*/
#include<stdio.h>
int main ()
{
    int i,r,arr[50];
    printf("Enter number of elements you want to enter in the array : ");
    scanf("%d",&r);
    printf("Enter elements : ");
    for(i=0; i<r; i++)
    {
        printf("\nElement %d : ",i+1);
        scanf("%d",&arr[i]);
    }
    for(i=0; r; r--,i++)
        printf("%d ",arr[i]);
    return 0;
}