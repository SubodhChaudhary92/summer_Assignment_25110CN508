/*Write a program to Merge arrays.*/
#include<stdio.h>
int main()
{
    int i,j,arr[50],n,m,c,f,arr1[50];

    printf("Enter number of elements (maximum 25) you want to enter in the first array : ");
    scanf("%d",&n);
    printf("Enter the elements in the array.");
    for(i=0; i<n; i++)
    {
        printf("\nEnter %d element : ",i+1);
        scanf("%d",&arr[i]);
    }

    printf("Enter number of elements (maximum 25) you want to enter in the second array : ");
    scanf("%d",&m);
    printf("Enter the elements in the array.");
    for(i=0; i<m; i++)
    {
        printf("\nEnter %d element : ",i+1);
        scanf("%d",&arr1[i]);
    }

    for(i=n; i<n+m; i++)
        arr[i]=arr1[i-n];
    n=n+m;

    printf("Your merged array is : ");
    for(i=0; i<n; i++)
        printf(" %d ",arr[i]);
  /*  for(i=0; i<n; i++)
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
    */
    return 0;
}