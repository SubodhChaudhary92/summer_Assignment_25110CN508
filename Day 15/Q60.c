/*Write a program to Move zeroes to end.*/
#include<stdio.h>
int main()
{
    int i,j,n,c=0,arr[50];
    printf("Enter the number of elements (maximum 50) you want to enter : ");
    scanf("%d",&n);
    for(i=0; i<n; i++)
    {
        printf("Enter element %d : ",i+1);
        scanf("%d",&arr[i]);
    }
    for(i=0; i<n; i++)
        if(arr[i]==0)
            c=c+1;
    for(i=0; i<n-c; i++)
    {
        if(arr[i]==0)
        {
            for(j=i; j<n-1; j++)
                arr[j]=arr[j+1];
            i=i-1;
            arr[n-1]=0;
        }
    }
    printf("After moving all zero(s) to the end of the entered array, you will get the following array : \n");
    for(i=0; i<n; i++)
        printf("%d ",arr[i]);
    return 0;
}