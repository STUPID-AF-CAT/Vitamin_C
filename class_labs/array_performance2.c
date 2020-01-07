#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int main(void)
{
    char saying [] = "For the meek shall inherit the earth\0";
    for (int i = 0; i < sizeof(saying); i++)
    {
        if (saying[i] == ' ')
        {
            saying[i] = 10;
        }
        
    }
    printf("%s", saying);
}
