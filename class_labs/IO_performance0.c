#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int deez_chars;
    printf("gimme some char: ");
    deez_chars = getchar();
    deez_chars++;
    printf("dis be da next char: ");
    putchar(deez_chars);
    putchar('\n');
    
    return 0;
}