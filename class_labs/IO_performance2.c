#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    char the_buff [10];
    printf("Gimme some strings boss: ");
    fgets(the_buff, sizeof(the_buff), stdin);
    printf("This is the string I got: ");
    fputs(the_buff, stdout);

    return 0;
}