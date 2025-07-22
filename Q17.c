#include<stdio.h>
int main()
{

    int qty1, qty2, qty3;
    float rate1,rate2,rate3;
    float total,discount,netAmount;

    printf("enter quantity for Item1:");
    scanf("%d", &qty1);
    printf("enter rate for Item 1:");
    scanf("%f", &rate1);
    printf("enter quantity for Item2:");
    scanf("%d", &qty2);
    printf("enter rate for Item2:");
    scanf("%f", &rate2);
    printf("enter quantity for Item3:");
    scanf("%d", &qty3);
    printf("enter rate for Item3:");
    scanf("%f", &rate3);

    total=(qty1*rate1)+(qty2*rate2)+(qty3*rate3);

    if(total >= 10000)
    discount=total * 0.20;
    else if(total >= 5000)
    discount =total * 0.15;
    else 
    discount=total * 0.08;

    netAmount = total-discount;

    printf("\nTotal sales Amount:%.2f",total);
    printf("\n Discount:%.2f",discount);
    printf("\n Net Amount:%.2f",netAmount);
    return 0;


}