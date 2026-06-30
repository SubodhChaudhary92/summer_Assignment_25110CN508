/*Write a program to Intersection of arrays.*/
#include <stdio.h>
int main()
{
    int i, n, k, c, m, j = 0, l = 0, arr1[50], ele1[100] = {0}, ele2[50] = {0}, arr2[50];
    printf("Enter the number of elements (maximum 50) you want to enter : ");
    scanf("%d", &n);
    for (i = 0; i < n; i++)
    {
        printf("\nEnter element %d : ", i + 1);
        scanf("%d", &arr1[i]);
    }
    /*First we will remove the common elements from this arr1*/
    for (i = 0; i < n; i++)
    {
        c = 0;
        for (k = i - 1; k + 1; k--)
            if (arr1[k] == arr1[i])
            {
                c = c + 1;
                break;
            }
        if (c == 0)
        {
            ele1[j] = arr1[i];
            j = j + 1;
        }
    }
    m = j;
    /*Now we have array ele1 which contains all non-commin elements of arr1*/
    printf("\nFirst Array without duplication is :\n");
    for (i = 0; i < j; i++)
        printf("%d ", ele1[i]);
    printf("\nEnter the number of elements (maximum 50) you want to enter : ");
    scanf("%d", &n);
    for (i = 0; i < n; i++)
    {
        printf("\nEnter element %d : ", i + 1);
        scanf("%d", &arr2[i]);
    }
    /*Now we will remove the common elements from this arr2*/
    j = 0;
    l = 0;
    for (i = 0; i < n; i++)
    {
        c = 0;
        for (k = i - 1; k + 1; k--)
            if (arr2[k] == arr2[i])
            {
                c = c + 1;
                break;
            }
        if (c == 0)
        {
            ele2[j] = arr2[i];
            j = j + 1;
        }
    }
    /*Now we have array ele2 which contains all non-commin elements of arr2*/
    printf("\nSecond Array without duplication is :\n");
    for (i = 0; i < j; i++)
        printf("%d ", ele2[i]);

    // now we will merge ele1 and ele2 and put in ele1
    for (i = m; i < j + m; i++)
        ele1[i] = ele2[i - m];

    printf("\nYour merged array is : ");
    for (i = 0; i < m + j; i++)
        printf(" %d ", ele1[i]);
    /*ele1 contains non-common elements of arr1 and arr2*/
    /*The most important thing is ele1 won't contan
    a element more that 2 times.*/
    /*Now we will find common elements within the array ele1.*/
    printf("\nIntersection of the two arrays is : \n");
    for (i = 0; i < m; i++)
        for (l = m; l < m + j; l++)
            if (ele1[i] == ele1[l])
                printf("%d ", ele1[i]);
    return 0;
}