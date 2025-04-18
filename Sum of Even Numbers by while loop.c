#include <stdio.h>

int main() {
    int n,i=2,sum=0;
    printf("Enter the Last number: ");
    scanf("%d",&n);

    while (i<=n) {
        sum += i;
        i=i+2;}
    printf("Sum of even numbers up to %d is: %d\n", n, sum);
    return 0;
}
