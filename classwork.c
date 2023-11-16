#include <stdio.h>

int main()
{
    float cp;
    float sp;
    float soln;
   

    cp = 4.3;
    sp = 3.6;

   soln = (cp - sp) / cp;
    printf("percentage Profit: %.1lf", soln*100);
    return 0;
}

