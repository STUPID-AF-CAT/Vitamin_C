#include <stdlib.h>
#include <stdio.h>
#include <ctype.h>

int palindrome_checker(char * sanitary_str, int counter, int start);

int main(void)
{
    char check_me[256] = {0};
    printf("Check if your string is a palindrome: ");
    fgets(check_me, 255, stdin);
    int counter = 0;

    char sanitary_str[256];
    for (int i = 0; i < 256; i++)
    {
        if ((check_me[i] >= 'a' && check_me[i] <='z') || (check_me[i] >= 'A' && check_me[i] <= 'Z'))
        {
            sanitary_str[counter] = check_me[i];
            counter++;
        }
    }
    int start = 0;
    sanitary_str[counter] = '\0';
    counter--;

    printf("%d\n", palindrome_checker(sanitary_str, counter, start));
    
    return 0;
}

int palindrome_checker(char * s_str, int c, int s)
{
    if (((c - 1 == s) && (toupper(s_str[c]) == toupper(s_str[s]))) || (c == s))
    {
        return 1;
    }
    else if ((toupper(s_str[c]) == toupper(s_str[s])) && (c - 1 != s))
    {
        return 1 & palindrome_checker(s_str, c - 1, s + 1);
    }
    else
    {
        return 0;
    }
}