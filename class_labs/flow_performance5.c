#include <stdlib.h>
#include <stdio.h>

int main(void)
{
    char phrase[450] = "You don't know what you don't know\nReading comprehension is hard\n";

    puts(phrase);

    int i = 0;
    while (phrase[i] != '\n')
    {
        printf("%c", phrase[i]);
        i++;
    }
    return 0;
}