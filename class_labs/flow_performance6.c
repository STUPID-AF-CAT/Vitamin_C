#include <stdlib.h>
#include <stdio.h>
#include <ctype.h>

int main(void)
{
    int num_array[26] = {0};
    char no_store = 0;
    int i = 0;

    do {
        no_store = fgetc(stdin);
        if (no_store > 32 && no_store < 126)
        {
            toupper(no_store);
            num_array[i] = no_store;
            i++;
        }
    } while (fgetc(stdin) != '\n');

    for (int j = 0; j < i; j++)
    {
        printf("%d", num_array[j]);
    }
    return 0;
}