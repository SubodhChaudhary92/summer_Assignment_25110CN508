/*Write a program to Count vowels and 
consonants.*/
#include<stdio.h>
int main()
{
    int i,temp,n, vowel =0,consonant=0;
    char arr[50];
    printf("Enter a single word string (max characters 50) : ");
    scanf("%s",&arr);
    for(n=0; arr[n]; n++);
    for(i=0; i<n; i++)
    {
        switch(arr[i])
        {
            case 'a' : 
            case 'e' : 
            case 'i' : 
            case 'o' : 
            case 'u' :
            case 'A' : 
            case 'E' : 
            case 'I' : 
            case 'O' : 
            case 'U' : vowel=vowel+1;
                        break;
            default : consonant=consonant+1;
        }

    }
    printf("In the entered string, the number of consonant is %d and number of vowel is %d: ",consonant,vowel);
    
    return 0;
}