#include<stdio.h>
int main()
{
    int num;
    printf("enter a number:");
    scanf("%d",&num);

    if(num % 5 == 0 && num % 7 == 0)
    {
        printf("\n Num is divisible by 5 and 7",num);
    }
    else if(num % 5 !=0 || num % 7 !=0) {
        printf("\n Num is not divisible by 5 and 7",num);

    }
    else{
        printf("zero");
    }
    return 0;
}