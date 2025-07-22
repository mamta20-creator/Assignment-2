#include<stdio.h>
int main()
{
    int triangle1,triangle2,triangle3;
    printf("Enter three sides of triangles:");
    scanf("%d %d %d",&triangle1,&triangle2,&triangle3);

    if ((triangle1 + triangle2 > triangle3) && (triangle1 + triangle3 > triangle2) && (triangle2 + triangle3 > triangle1)){
    printf("\n The triangle is valid.");
    }
    else{
        printf("\n The triangle is not valid.");
    }
    return 0;
}