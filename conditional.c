#include <stdio.h>
int main()
{

    printf("Enter your grade: ");
    int score;

    scanf("%d", &score);

    if (score <= 39 && score >= 0)
    {
        printf("Your grade is F");
    }
    else if (score >= 40 && score <= 49)
    {
        printf("Your grade is E");
    }

    else if (score >= 50 && score <= 59)

    {
        printf("Your grade is D");
    }
    else if (score >= 60 && score <= 69)
    {
        printf("Your grade is B");
    }
    else if (score >= 70 && score <= 100)
    {
        printf("Your grade is A");
    }
    else
        printf("Invalid input");
    return 0;
}