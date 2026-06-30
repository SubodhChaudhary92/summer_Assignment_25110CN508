/*Write a program to Find common elements.*/
/*
Here are some good test cases :
4 2 3 2 0 5 0 7 0 2 3
element 2 and element 0 has the same frequency i.e. 3.
to handle such cases I will note down distinct elements
from the array in another array say "ele" and the frequency
of each element in another array say "fre".
arrays "ele" and "fre" are initialized by a single value so that all
remaining elements of the array become 0.
then I will short the array "fre" and corresponding array "ele".
then from the array "fre" I will find the index of
biggest element say "hi"
and then from the array "ele" I will find the element
present at position "hi".
Here is a good test case
arr = 4 5 4 3 2 2 3
*/
#include<stdio.h>
int main()
{
    int i,n,k,c,j=0,l=0,arr[50],ele[50]= {0};
    printf("Enter the number of elements (maximum 50) you want to enter : ");
    scanf("%d",&n);
    for(i=0; i<n; i++)
    {
        printf("\nEnter element %d : ",i+1);
        scanf("%d",&arr[i]);
    }
    printf("\nFollowing element(s) of Array are duplicate/common :\n");
    for(i=0; i<n; i++)
    {
        c=0;
        for(k=i-1; k+1; k--)
            if(arr[i]==arr[k])
            {
                c=c+1;
                break;
            }
        if(c==0)
            for(k=i+1; k<n; k++)
                if(arr[i]==arr[k])
                {
                    printf("%d ",arr[i]);
                    break;
                }
    }
    return 0;
}