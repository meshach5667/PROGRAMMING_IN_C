#include <stdio.h>

int main()
{
    int number;
    float average;
    int number2;

    number = 2;
    number2 = 3;
    printf("The value of the first number is: %d\n", number);
    printf("The value of the second number is: %d\n", number2);

    average = (number + number2) / 2;
    printf("Average: %.1lf", average);
    return 0;
}

