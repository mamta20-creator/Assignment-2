#include<stdio.h>
int main()
{
    char ch;
    printf("enter a lowercase character:");
    scanf("%c",&ch);

    if(ch >= 'a' && ch <='z')
    if(ch == 'a' || ch =='e' ||ch == 'i' ||ch == 'o' || ch =='u'){
        printf("\n vowel %c",ch);
    }
    else{
        printf("\n consonant %c",ch);
    }
    else{
        printf(" Invalid input lowercase character");
    }
    return 0;
}