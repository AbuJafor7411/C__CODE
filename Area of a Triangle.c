#include<stdio.h>
int main()
{
    float B, H, Area;
    printf("Enter the base:");
    scanf("%f",&B);
    printf("Enter the hight:");
    scanf("%f",&H);
    Area=0.5*B*H;
    printf("Area of the triangle is %.2f",Area);
    return 0;
}
