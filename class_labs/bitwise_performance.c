#include <stdlib.h>
#include <stdio.h>

int main(void)
{
    u_int32_t userInput = 0;
    printf("Need some input baws: ");
    fscanf(stdin, "%d", &userInput);
    u_int32_t bitChecker = 0x01;
    bitChecker = bitChecker << 31;
    for (bitChecker; bitChecker > 0; bitChecker = bitChecker / 2)
    {
        (userInput & bitChecker)? fprintf(stdout, "1"):fprintf(stdout, "0");
    }
    printf("\n");

    return 0;
}