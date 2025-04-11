#include<stdio.h>
int main()
{
    int A,B,Temp;
    printf("Enter your 2 number");
    scanf("%d%d",&A,&B);
    Temp=A;
    A=B;
    B=Temp;
    printf(" After Swap\n%d\n%d",A,B);
    return 0;
}
