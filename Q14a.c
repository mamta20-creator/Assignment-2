#include<stdio.h>
int main()
{
    int x,y;
    printf("enter 2 coordinate:");
    scanf("%d%d",&x,&y);

    if(x == 0 && y==0){
        printf("\n point lies at the origin");
    }
    else if(x>0 && y>0){
        printf("\n point lies in Qudrant 1");
    }
        else if(x<0 && y>0){
        printf("\n point lies in Qudrant 2");
    }
        else if(x<0 && y<0){
        printf("\n point lies in Qudrant 3");
    }
    else if(x<0 && y<0){
        printf("\n point lies in Qudrant 4");
    }
    else if(x == 0)
    printf("point lies on the y axis");
    else if(y == 0)
    printf("point lies on the y axis");

return 0;
}
    
