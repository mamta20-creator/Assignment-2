#include<stdio.h>
int main()
{
    int h,m,s;
    printf("enter hour:");
    scanf("%d",&h);
    printf("enter minutes:");
    scanf("%d",&m);
    printf("enter seconds:");
    scanf("%d",&s);

    if((h>=0 && h <=24) && (m >=0 && m<= 59) && (s >=0 && s<= 59))
    {
        printf("\n Time is valid");
    }
    else{
        printf("\n Time is not valid");
    }
    return 0;
}