#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    u_int32_t userInput;
    printf("Hey dere buddy, give me a number to shift: ");
    fscanf(stdin, "%d", &userInput);
    printf("The number you entered was %d.\n", userInput);
    u_int32_t temp = userInput;
    temp = temp << 3;
    printf("This is that number shifted 3 bits left: %d.\n", temp);
    temp = userInput;
    temp = temp >> 5;
    printf("This is the number shifted 5 bits to the right: %d.\n", temp);

    return 0;
}