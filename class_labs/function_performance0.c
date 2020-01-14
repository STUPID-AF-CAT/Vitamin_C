#include <stdlib.h>
#include <stdio.h>

int replace_character(char * the_string, const char find_me, const char replace_me);

int main(void)
{
    char the_string[60] = "Uh nu, I seem tu have misplaced my o's.\n";
    char find_me;
    char replace_me;
    printf("What letter do you want to replace? ");
    find_me = getchar();
    printf("With what letter? ");
    replace_me = getchar();
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
        x++;
    }
    return replaced;
}