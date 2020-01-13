#include <stdlib.h>
#include <stdio.h>

int main(void)
{
    u_int32_t first = 0x0,
              second = 0x0,
              third = 0x0;
    
    printf("Input two integers, separate by a space: ");
    scanf("%32u %32u", &first, &second);

    if (first == second)
    {
        printf("You messed up, these are the same size.\n");
    }
    else if (first < second)
    {
        second = second ^ third;
        third = second ^ third;
        second = second ^ third;
        printf("Third value is now %d and second is now %d.\n", third, second);
    }
    else
    {
        first = first ^ third;
        third = first ^ third;
        first = first ^ third;
        printf("Third value is now %d and first is now %d.\n", third, first);
    }
    
    if (first + second + third > 2)
    {
        printf("\nFirst: %d\nSecond: %d\nThird: %d\n", first, second, third);
    }


    return 0;
}