#include <stdio.h>

int main()
{
    int age;
    double salary;
    float taxrate;

    age = 2;
    printf("Age:%d ", age);
    // scanf("%d",&age);
    printf(&age);

    return 0;
}