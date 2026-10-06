#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    //creating the variables for the operator and numbers to be operated on.
    char operator;
    double first_number, second_number;
    //capturing the operator input
    printf("Enter an operator (+, -, *, /, %%): ");
    scanf("%c", &operator);
    //capturing the numbers inputs
    printf("Enter the numbers: ");
    scanf("%lf %lf", &first_number, &second_number);

    switch (operator){
    case '+':
        printf("%.2lf + %.2lf= %.2lf\n", first_number, second_number, first_number + second_number);
        break;

    case '-':
        printf("%.2lf - %.2lf= %.2lf\n", first_number, second_number, first_number - second_number);
        break;

    case '*':
        printf("%.2lf * %.2lf= %.2lf\n", first_number, second_number, first_number * second_number);
        break;

    case '/':
        if (second_number != 0.0) {
                printf("%.2lf / %.2lf= %.2lf\n", first_number, second_number, first_number / second_number);

        } else {
            printf("Error: Can't divide by zero.\n");
        }
       break;
    
    case '%':
        if (second_number != 0.0) {
            printf("%.2lf %% %.2lf = %.2lf\n", first_number, second_number, fmod(first_number, second_number));
        } else {
        printf("Error: Can't divide by zero.\n");
        }
        break;
    

    default:
        printf("Invalid operator.\n");

    }


    return 0;

}
