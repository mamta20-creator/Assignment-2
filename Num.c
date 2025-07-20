#include<stdio.h>
int main()
{
    int num;
    printf("enter a number:");
    scanf("%d",&num);

    if(num > 0){
    printf("num is positive:%d",num);
    }
    else if(num < 0){
        printf(" num is negative:%d",num);
    }
    else
    {
        printf("The num is zero:%d",num);
    }
    return 0;

    
}