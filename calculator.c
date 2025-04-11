#include<stdio.h>
int main()
{
  double num1,num2,result;
    char operator;
    printf("Enter an operator(+,-,*,/):");
    scanf("%c",&operator);
    printf("Enter two operands:");
    scanf("%lf %lf",&num1,&num2);
    switch(operator){
        case'+':
        result = num1 + num2;
        printf("%.2lf + %.2lf = %.2lf\n", num1, num2, result);
        break;
        case'-':
        result = num1 - num2;
        printf("%.2lf - %.2lf = %.2lf\n", num1, num2, result);
        break;
        case'*':
        result = num1 * num2;
        printf("%.2lf * %.2lf = %.2lf\n",num1, num2, result);
        break;
        case'/':
            if (num2!=0)
            {
        result = num1 / num2;
        printf("%.2lf / %.2lf = %.2lf\n" ,num1, num2, result);
            }
            else
            {
                printf("Error!division by zero.\n");
            }
        break;
        default:
            printf("invalid operator\n");
            break;

    }
    return 0;
}
