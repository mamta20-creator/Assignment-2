#include<stdio.h>
int main()
{
    float salary, tax=0;
    printf("enter your basic salary");
    scanf("%f",&salary);

    if(salary < 150000){
        tax = 0;
    }else if(salary <= 300000)
    {
        tax=salary*0.20;

    }else{
        tax =salary*0.30;
    }
    printf("\n Income Tax to be paid:%2f",tax);
    return 0;
}