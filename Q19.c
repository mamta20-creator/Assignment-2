#include<stdio.h>
#include<ctype.h>
int main()
{
    char ch;
    printf("enter a character:");
    scanf("%c",&ch);
    
    if(isupper(ch))
    {
        
        printf("\n Lower:%c",tolower(ch));
        
    }else if(islower(ch)){
        
        printf("\n uppercase:%c",toupper(ch));
    }else{
        printf("\n not an alphabet character");
    }
    return 0;
}