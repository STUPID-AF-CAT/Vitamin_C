#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int main(void)
{
    char saying [] = "For the meek shall inherit the earth\0";
    char temp [sizeof(saying)];
    strcpy(temp, saying);
    for (int i = 0; i < ((sizeof(saying) * 2) - 1); i++)
    {
        if ((i % 2) == 0)
        {
            saying[i] = temp[i/2];
        }
        else
        {
            saying[i] = 10;
        }
        
    }
    printf("%s", saying);
}
