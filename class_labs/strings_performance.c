#include <string.h>
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    char the_string [256] = {0};
    strcpy(the_string, "If we hit that bullseye, "
                        "the rest of the dominoes "
                        "will fall like a house of "
                        "cards. Checkmate.\n");
    for (int i = 0; i < sizeof(the_string) - 1; i++)
    {
        if (the_string[i] == '\0')
        {
            the_string[i] = ' ';
        }
    }
    the_string[255] = '\0';
    printf("%s", the_string);
    printf("%ld", sizeof(the_string));
    return 0;
}