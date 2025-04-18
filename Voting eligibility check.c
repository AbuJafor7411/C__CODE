#include<stdio.h>
int main()
{
    int age;
    printf("Enter your age:");
    scanf("%d",&age);
    if(age>=0){
        if (age>=18){
            printf("your are eligible.\n");}
            else {
                printf(" You are not eligible.\n");
            }
    }
    else {
        printf("Invalid age!");}
        return 0;
}
