#include<stdio.h>
int main()
{
    int i=1, n, sum=1;
    printf("Enter the last number(limit 33):");
    //The maximum value of integer data 2,147,483,647 & minimum value is -2,147,483,648
    scanf("%d",&n);
    do{
        sum = sum*i;
        i++;}
    while(i<=n);
     printf("%d",sum);
    return 0;
}
