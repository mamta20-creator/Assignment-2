#include<stdio.h>
int main()
{
    int h,s,m;
    printf("enter hour:");
    scanf("%d",&h);
    printf("enter minutes:");
    scanf("%d",&m);
    printf("enter second:");
    scanf("%d",&s);

    if(h<=0 && h>24)
    {
    if(s>=0 && s<60)
    
        printf("Time is valid");
    
    else
        printf("second is Invalid");
    }
    else
        printf("Hours is Invalid");

    return 0;
}
