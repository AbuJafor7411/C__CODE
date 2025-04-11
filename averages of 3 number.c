#include<stdio.h>
int main()
{
    int A, B, C;
    float avg, S;
    printf("Enter your 3 number:");
    scanf("%d %d %d",&A, &B, &C);
    S=A+B+C;
    avg=S/3;
    printf("Average=%.2f",avg);
    return 0;
}
