/*Write a program to Print character pyramid.*/
#include<stdio.h>
void ron(int n);
int main()
{
    int n,i,j;
    printf("Enter number of rows : ");
    scanf("%d",&n);
    for(i=0; i<n; i++)
    {
        for(j=-n+1; j<n; j++)
        {
            if(j>0)
            {
                if(j<=i)

                    printf(" %c ",i-j+'A');
                else
                    printf("   ");
            }
            else
            {
                if(-j<=i)

                    printf(" %c ",i+j+'A');
                else
                    printf("   ");
            }
        }
        printf("\n");
    }
    return 0;
}