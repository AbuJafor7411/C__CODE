#include <stdio.h>

int main()
{
    int n,i=1,sum=0;
    printf("Enter the last number: ");
    scanf("%d",&n);
    while (i<=n) {
        sum +=(i*i);
        i++;}
    printf("Sum of squares from 1 to %d is: %d\n",n,sum);
    return 0;
}
