#include <stdio.h>
#include <stdlib.h>

int recursive_divisor(int x, int y);

int main(void)
{
    int x, y;
    printf("THE GREATEST DIVISOR OF ALL TIME: ");
    scanf("%32d %32d", &x, &y);

    printf("Here ya go buddy, the great divisor: %d\n", recursive_divisor(x, y));
    return 0;
}

int recursive_divisor(int x, int y)
{
    if (y == 0)
    {
        return x;
    }
    else
    {
        recursive_divisor(y, x%y);
    }
}