#include<stdio.h>
int main() {
    int num,fact=1,i =1;

    printf("Enter a number: ");
    scanf("%d",&num);

    if (num<0) {
        printf("fact of a negative number is undefined.\n");
        //factorial of a negative number is undefined.
    } else {
        while (i<=num) {
            fact=fact*i;
            i++;
        }
        printf("factorial of %d is %d.\n", num,fact);
    }

    return 0;
}
