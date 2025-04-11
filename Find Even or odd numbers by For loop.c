#include<stdio.h>
int main()
{
    int n;
    printf("Enter the last number:");
    scanf("%d",&n);
    printf("Even number between 1 and %d are:\n",n);
    for( int i = 1;i <= n; i++){
   if(i % 2 == 0)
    printf("%d ",i);}
    printf("\nOdd number between 1 and %d are:\n",n);
    for(int i=1;i<=n;i++){
        if(i %2!=0){
            printf("%d ",i);
        }
    }
    return 0;
}


