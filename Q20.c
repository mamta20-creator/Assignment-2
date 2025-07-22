#include<stdio.h>
int main()
{
    char ch;
    printf("enter anything");
    scanf("%c",&ch);

    if(ch >=65 && ch <= 95)
        printf("uppercase letter");
    else if(ch >=97 && ch <=122)
       printf("lowercase letter");
    else if(ch >=48 && ch <=58)
         printf("Digit");
    else
    ("special symbol");
return 0;
}