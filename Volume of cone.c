#include <stdio.h>
#include <math.h>

int main() {
    double r, h, v;
    const double pi = 3.14159;

    printf("Enter the radius of the cone: ");
    scanf("%lf", &r);
    printf("Enter the height of the cone: ");
    scanf("%lf", &h);
    v=(1.0 / 3.0) * pi * pow(r, 2) * h;
    printf("The volume of the cone is: %.2lf\n", v);
    return 0;
}

