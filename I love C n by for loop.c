#include<stdio.h>
int main()
{
    int i, n;
    printf("How many times to repeat: ");
    scanf("%d", &n);
    for(i = 1; i <= n; i++)
    {
        printf("I love C %d\n", i);
    }
    return 0;
}

