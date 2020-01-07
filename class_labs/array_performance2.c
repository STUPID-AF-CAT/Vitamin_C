#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    char saying [] = "For the meek shall inherit the earth\0";
    for (int i = 0; i < sizeof(saying); i++)
    {
        printf("%c%c", saying[i], 10);
    }
}