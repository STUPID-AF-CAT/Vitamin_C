#include <stdlib.h>
#include <stdio.h>

int main(void)
{
    int sign_me = 0;
    printf("It's number time: ");
    scanf("%d", &sign_me);
    if (sign_me>>31 == 0)
    {
        printf("Original binary value: ");
        for (u_int32_t i = 0b10000000000000000000000000000000; i > 0; i = i >> 1)
        {
            (sign_me & i)? fprintf(stdout, "1"):fprintf(stdout, "0");
        }
        printf("\nIf you're literally just flipping one bit: ");
        int new_thing = (sign_me ^ 0x01<<31);
        printf("\nThis is the one bit flipped negative: %d", new_thing);
        printf("\nThe binary: ");
        for (u_int32_t i = 0x01<<31; i > 0; i = i >> 1)
        {
            (new_thing & i)? fprintf(stdout, "1"):fprintf(stdout, "0");
        }
        printf("\nFlipping all the bits for -12...\n");
        sign_me = ~sign_me + 1;
        printf("New value %d.\n", sign_me);
        printf("These are the new bits: ");
        for (u_int32_t i = 0x01<<31; i > 0; i = i >> 1)
        {
            (sign_me & i)? fprintf(stdout, "1"):fprintf(stdout, "0");
        }
        printf("\n");

    }
    else
    {
        printf("%d is already negative.\n", sign_me);
    }

    return 0;
}