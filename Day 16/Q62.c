/*Write a program to Find maximum frequency element.*/
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
    int i,n,k,hi,c,t,f,j=0,l=0,arr[50],ele[50]= {0},fre[50]= {0};
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
        f=1;
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
            for(k=i+1; k<n; k++)
                if(arr[k]==arr[i])
                    f=f+1;
            fre[l]=f;
            l=l+1;
        }
    }
    for(i=0; i<l; i++)
        for(j=i+1; j<l; j++)
        {
            if(fre[j]<fre[i])
            {
                t=fre[i];
                fre[i]=fre[j];
                fre[j]=t;
                t=ele[i];
                ele[i]=ele[j];
                ele[j]=t;
            }
        }
    printf("\n");
    printf("Following element(s) has the maximum frequency : ");
    printf("\n");
    printf("Element   Frequencies");
    printf("\n");
    printf("%d       |   %d",ele[l-1],fre[l-1]);
    printf("\n");
    for(i=l-1; i; i--)
    {
        if(fre[i]==fre[i-1])
        {
            printf("%d       |   %d",ele[i-1],fre[i-1]);
            printf("\n");
        }
        else
            break;
    }
    return 0;
}