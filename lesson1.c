#include <stdio.h>

int main()
{
    char name[100];
    printf("Please enter your name: ");
    scanf("%s", name);
    printf("Hi %s!\n", name);

    return 0;
}
