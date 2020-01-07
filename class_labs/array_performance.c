#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int ages [15] = {31, 27, 24, 22, 25, 26, 35, 32, 28, 28, 28, 25, 25, 25, 27};
    for (int i = 0; i < 15; i++)
    {
        if (i == 0)
        {
            printf("The instructor is %d years old!\n", ages[i]);
        }
        else
        {
            printf("Student number %d is %d years old!\n", i, ages[i]);
        }
        
    }
}