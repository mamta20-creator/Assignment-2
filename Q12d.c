#include<stdio.h>
int main()
{
    int a,b,c,min;
    printf("enter 3 numbers:");
    scanf("%d%d%d",&a,&b,&c);

    if(a<b && a<c)//10 20 30
     min=a;
    else if(b<c)
    min=b;
    else 
      min=c;

      printf("Min is:%d",min);
      return 0;
}