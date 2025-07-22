#include<stdio.h>
int main()
{
    int num;
    printf("enter a number:");
    scanf("%d",&num);

    if(num % 5!=0 || num % 7 !=0)
    {
        printf("Num is not divisible by both 5 and 7:%d",num);
    
    else if(num %5 == 0 && num % 7==0)
    {
        printf("num is divisible by both 5 and 7:%d",num);
    }
}
    return 0;
}
