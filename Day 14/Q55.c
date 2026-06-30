/*Write a program to Second largest element.*/
/*Here is a good example 
4 7 9 2 8 5 8 2 6*/
#include<stdio.h>
int main()
{
    int arr[50],i,n,sec,fir,c=0;
    printf("Enter number of terms (max 50) you want to enter : ");
    scanf("%d",&n);
    for(i=0; i<n; i++)
    {
        printf("Enter element %d : ",i+1);
        scanf("%d",&arr[i]);
    }
    fir=sec=arr[0];
    for(i=1; i<n; i++)
    {
        if(arr[i]>fir)
        {
            sec=fir;
            fir=arr[i];
        }
        else if(arr[i])
    }
    printf("Second largest element in the given list of items is : %d", sec);
    return 0;
}
fir 7 9
sec 4 7
i 2 3