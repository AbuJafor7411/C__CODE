#include<stdio.h>
int main()
{
    int Age;
    printf("Enter your age:");
    scanf("%d", &Age);
    if(Age<=0){
            printf("Invalid age\n");
     if(Age<=12){
            printf("Child\n");}
     if(Age<=19)
                printf("Teenager\n");
     if(Age<=64)
            printf("Adult\n");}
        else
            printf("Senior\n");
             return 0;
    }

