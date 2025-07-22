#include<stdio.h>
int main()
{
    int days, fine;
    printf("enter number of days book is returned late:");
    scanf("%d", &days);

    if(days<5)
    fine =days*1;
    else if(days <=10)
    fine=days *2;
    else
    fine=days*5;
    printf("total fine=Rs.%d",fine);
    return 0;

}