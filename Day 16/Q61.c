/*Write a program to Find missing number in array.*/
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
    int i,n,k,c,j=0,t,l=0,arr[50],ele[50]= {0};
    printf("Enter the number of elements (maximum 50) you want to enter : ");
    scanf("%d",&n);
    for(i=0; i<n; i++)
    {
        printf("\nEnter element %d : ",i+1);
        scanf("%d",&arr[i]);
    }
    for(i=0; i<n; i++)
    {
        c=0;
        for(k=i-1; k+1; k--)
            if(arr[k]==arr[i])
            {
                c=c+1;
                break;
            }
        if(c==0)
        {
            ele[j]=arr[i];
            j=j+1;
        }
    }
    printf("\nArray without duplication is :\n");
    for(i=0; i<j; i++)
        printf("%d ",ele[i]);

    /*Note that now array ele won't contain any common elements i.e.
    all its element are distinct from each other also its size is not n now
    its size is j.*/
    //now we will short the array ele in ascending order

    for(i=0; i<j; i++)
        for(k=i+1; k<j; k++)
            if(ele[i]>ele[k])
            {
                t=ele[k];
                ele[k]=ele[i];
                ele[i]=t;
            }
    printf("\nShorted array is : \n");
    for(i=0; i<j; i++)
        printf("%d ",ele[i]);
    printf("\nMissing values are : \n");
    for(i=0; i<j-1; i++)
        for(k=ele[i]+1; k<ele[i+1]; k++)
            printf("%d ",k);
    return 0;
}