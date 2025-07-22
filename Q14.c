#include<stdio.h>
int main()
{
    int x,y;
    printf("enter 2 coordinates:");
    scanf("%d%d",&x,&y);

    if(x == 0 && y ==0)
    printf("\n point lies at the origin");

    else if(x > 0 && y > 0)
    printf("\n Quadrant 1");
    else if(x < 0 && y > 0)
    printf("\n Quadrant 2");
    else if(x < 0 && y < 0)
    printf("\n Quadrant 3");
    else if(x > 0 && y < 0)
    printf("\n Quadrant 4");

else if (x==0)
printf("lies on Y axis");
else if (y==0)
printf("lies on x axis");
return 0;



}
