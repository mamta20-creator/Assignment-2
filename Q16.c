#include<stdio.h>
int main()
{
    int m1,m2,m3,total;
    float avg;

    printf("enter marks for 3 subjects:");
    scanf("%d%d%d", &m1,&m2,&m3);

    total= m1+m2+m3;
    avg=total/3;

    printf("\n Total marks=%d",total);
    printf("\n Average=%2f",avg);

    if(avg >= 70)
    printf("\n class:first class");
    else if(avg >= 60)
    printf("\n class:second class");
    else if(avg >= 40)
    printf("\n class:pass class");
    else
    printf("\n Result:Fail");
return 0;
}