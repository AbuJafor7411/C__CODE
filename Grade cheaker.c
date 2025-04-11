#include<stdio.h>
int main()
{
    int n;
    printf("Enter your number:");
    scanf("%d",&n);
    if(n>100){
        printf("\nInvalid");}
    else if(n>=80){
        printf("\nYour grade is A+");}
    else if(n>=75){
        printf("\nYour grade is A");}
    else if(n>=70){
        printf("\nYour grade is A-");}
    else if(n>=65){
        printf("\nYour grade is B+");}
    else if(n>=60){
        printf("\nYour grade is B");}
    else if(n>=55){
        printf("\nYour grade is B-");}
    else if(n>=50){
        printf("\nYour grade is C+");}
    else if(n>=45){
        printf("\nYour grade is C-");}
    else if(n>=40){
        printf("\nYour grade is D");}
    else if(n<40)
        printf("\nFailed");
    else
        printf("\nInvalid");
return 0;
}
