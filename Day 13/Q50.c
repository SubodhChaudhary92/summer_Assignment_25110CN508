/*Write a program to Find sum and average of array.*/
#include<stdio.h>
int main ()
{
    int i,r,arr[50],sum=0;
    float avg;
    printf("Enter number of elements you want to enter in the array : ");
    scanf("%d",&r);
    printf("Enter elements : ");
    for(i=0; i<r; i++)
    {
        printf("\nElement %d : ",i+1);
        scanf("%d",&arr[i]);
    }
    for(i=0; r; r--,i++)
        sum+=arr[i];
    printf("Sum of all elements of the array is : %d\n",sum);
    printf("avarage of all elements of the array is : %f",(float)sum/i);
    return 0;
}