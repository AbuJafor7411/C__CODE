#include<stdio.h>
int main()
{
    int i=1,n,mul;
    printf("Enter a number to display its multiplication table:");
    scanf("%d",&n);
    do{
        mul=i*n;
        printf("%d * %d = %d\n",n,i,mul);
        ++i;}
    while(i<=10);
    return 0;
}
