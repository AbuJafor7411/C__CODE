#include<stdio.h>
int main()
{
    int Year;
    printf("Enter the year:");
    scanf("%d",&Year);
    if((Year%4==0&&Year%100!=0)||(Year%400==0))
    {
        printf("%d is Leap Year\n",Year);
    }
    else
    {
        printf("%d is not Leap year\n", Year);
    }
    return 0;
}
