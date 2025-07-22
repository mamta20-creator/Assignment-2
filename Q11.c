#include<stdio.h>
int main()
{
    int num1,num2;
    printf("enter a 2 numbers:");
    scanf("%d%d",&num1,&num2);

    if(num1 == num2){
        printf("\n both numbers are equal");
    } else if(num1 > num2){
        printf("%d is greater than",num1,num2);
    } else {
        printf("%d is less than",num1,num2);
    }
    return 0;
}