/*Write a program to Print Armstrong numbers in a range.*/
#include <stdio.h>
int main()
{
    int l, u, a, p, c, s, k, count;
    printf("Enter the number : \n");
    printf("Enter the lower limit : ");
    scanf("%d", &l);
    printf("Enter the upper limit : ");
    scanf("%d", &u);
    a = l;
    for (; a != u; a++)
    {
        k = a;
        l=a;
        s=0;
        count=1;
        for (; l >= 10; l /= 10)
            count += 1;
        
        c = count;
        for (; k; k /= 10)
        {
            l = k % 10;
            p = 1;
            for (; count; count--)
                p = p * l;
            count = c;
            s = s + p;
        }
        if (a == s)
            printf("%d ", a);
    }
    return 0;
}