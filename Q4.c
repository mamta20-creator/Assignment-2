#include<stdio.h>
int main()
{
    float costprice,sellingprice,profitOrloss;
    printf("enter price:");
    scanf("%f%f",&costprice,&sellingprice);

    if(sellingprice > costprice)
    {
        profitOrloss= sellingprice - costprice;
        printf("\n profit made:%2f", profitOrloss);
    }
    else if(costprice > sellingprice){
        profitOrloss =costprice-sellingprice;
        printf("loss occurred:%2f",profitOrloss);
    }else{
        printf("\n no profit,no loss");
    }
    return 0;
    }
    
     
