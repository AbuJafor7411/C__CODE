#include<stdio.h>
int main()
{
    int a,b;
    printf("Enter your 2 value :");
    scanf("%d %d", &a,&b);
    a=a+b;
    b=a-b;
    a=a-b;
    printf("%d\n%d",a,b);
    return 0;
}
