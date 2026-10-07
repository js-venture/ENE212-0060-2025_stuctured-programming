#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char user_input[10000];

    //ask for input from the user
    printf("Enter a string for example your name (without spacing please): ");
    scanf("%9999s", user_input);

    //calculate the length of the string inputted by the user
    size_t length_of_string = strlen(user_input);

    //output the result
    printf("The length of the string is: %zu\n", length_of_string);

    return 0;

}
