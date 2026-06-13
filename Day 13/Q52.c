/*Write a program to Count even and odd elements.*/
#include<stdio.h>
int main ()
{
    int i,r,arr[50],e=0,o=0;
    printf("Enter number of elements you want to enter in the array : ");
    scanf("%d",&r);
    printf("Enter elements : ");
    for(i=0; i<r; i++)
    {
        printf("\nElement %d : ",i+1);
        scanf("%d",&arr[i]);
    }
    for(i=0; r; r--,i++)
    {
        if(arr[i]%2)
            o++;
        else
            e++;
    }
    printf("Number of even elements in the array is : %d\nNumber of odd elements in the array is : %d",e,o);
    return 0;
}