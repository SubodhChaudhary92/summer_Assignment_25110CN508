/*Write a program to Find pair with given sum.*/
/*
Here is a good test case : 
arr = 2 4 7 3 2 5 1 3 4 2 
search for sum = 6.
*/
#include<stdio.h>
int main()
{
    int i,n,c,j,k,arr[50];
    printf("Enter the number of elements (maximum 50) you want to enter : ");
    scanf("%d",&n);
    for(i=0; i<n; i++)
    {
        printf("\nEnter element %d : ",i+1);
        scanf("%d",&arr[i]);
    }
    printf("Enter the sum you want to search for : ");
    scanf("%d",&c);
    printf("Following pairs have the sum %d.\n",c);
    for(i=0; i<n-1; i++)
    {
        k=c-arr[i];
        for(j=i+1; j<n; j++)
            if(arr[j]==k)
                printf("%d  %d\n",arr[i],arr[j]);
    }
    return 0;
}