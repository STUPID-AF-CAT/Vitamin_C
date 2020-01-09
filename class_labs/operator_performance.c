#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <math.h>

int main(void) 
{
    double side_a = 0.0;
    double side_b = 0.0;

    printf("Give me side A: ");
    scanf("%10lf", &side_a);
    printf("Now give me side B: ");
    scanf("%10lf", &side_b);

    if (side_a > 0 && side_b > 0)
    {
        printf("The hypotenuse of %f and %f is %f.\n", 
                side_a, side_b, sqrt(pow(side_a, 2) + pow(side_b, 2)));
    }
    else
    {
        printf("Why would you put negative numbers or zero there?!?!?\n");
    }
    
    return 0;
}