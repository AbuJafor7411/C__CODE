#include<stdio.h>
#define PI 3.14159
int main()
{
    float A, R;
    printf("Enter the radius of the circle:");
    scanf("%f",&R);
    A=PI*R*R;
    printf("The area of the circle is :%.2f\n",A);
    return 0;

}
