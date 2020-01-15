#include <stdlib.h>
#include <stdio.h>
#include <ctype.h>

int replace_character(char * the_string, const char find_me, const char replace_me);

int main(void)
{
    char the_string[256] = {0};
    char find_me;
    char replace_me;
    printf("Type something lol: ");
    fgets(the_string, 255, stdin);
    printf("What letter do you want to replace? ");
    scanf("\n%c", &find_me);
    printf("With what letter? ");
    scanf(" %c", &replace_me);
    printf("You got it baws.\n");


    int count = replace_character(the_string, find_me, replace_me);
    printf("That character has been replace %d times.\n", count);
    printf("%s", the_string);
    return 0;
}

int replace_character(char * the_string, const char find_me, const char replace_me)
{
    int replaced = 0;
    int x = 0;
    while (the_string[x] != '\0')
    {
        if (the_string[x] == find_me)
        {
            the_string[x] = replace_me;
            replaced++;
        }
        else if (toupper(the_string[x]) == toupper(find_me))
        {
            the_string[x] = toupper(replace_me);
            replaced++;
        }
        x++;
    }
    return replaced;
}
