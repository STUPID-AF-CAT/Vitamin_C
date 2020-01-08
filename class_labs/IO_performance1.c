#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int deez_chars;
    printf("gimme some char: ");
    deez_chars = getc(stdin);
    deez_chars--;
    printf("dis be da next char: ");
    putc(deez_chars, stdout);
    putc('\n', stdout);
    
    return 0;
}