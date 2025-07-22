#include<stdio.h>
int main()
{
    int year;
    printf("enter a year:");
    scanf("%d",&year);

    if((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)){
    printf(" \n leap year %d",year);
    }
else{
    printf(" \n not a leap year %d",year);
}
return 0;
}