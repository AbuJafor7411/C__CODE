#include<stdio.h>
int main()
{
    int i, n, sum=0;
    printf("Enter the last number of the sum:");
    scanf("%d",&n);
    for(i=1;i<n;i++)
    {sum=sum+i;}
        printf("The sum of numbers from 1 to %d is : %d\n",n,sum);
    return 0;
}
