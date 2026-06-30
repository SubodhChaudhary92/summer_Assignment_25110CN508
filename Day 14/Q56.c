/*Write a program to Find duplicates in array.*/
#include<stdio.h>
int main()
{
    int i,j,arr[50],n,c,f;
    printf("Enter number of elements (maximum 50) you want to enter in the array : ");
    scanf("%d",&n);
    printf("Enter the elements in the array.");
    for(i=0; i<n; i++)
    {
        printf("\nEnter element %d : ",i+1);
        scanf("%d",&arr[i]);
    }
    printf("Your array is : ");
    for(i=0; i<n; i++)
        printf(" %d ",arr[i]);
    for(i=0; i<n; i++)
    {
        c=0;
        f=0;
        for(j=i-1; j+1; j--)
            if(arr[j]==arr[i])
            {
                c=c+1;
                break;
            }
        if(c==0)
            for(j=i+1; j<n; j++)
                if(arr[j]==arr[i])
                {
                    f=f+1;
                    break;
                }
        if(f)
            printf("\n%d is a duplicate element.",arr[i]);
    }
    return 0;
}