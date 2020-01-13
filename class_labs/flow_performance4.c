#include <stdlib.h>
#include <stdio.h>
#include <math.h>

int main(void)
{
    int large = 0;
    printf("It's time to duel: ");
    scanf("%32d", &large);

    int k = 0;
    while (pow(3, k) < large)
    {
        k = k + 1;
    }
    
    printf("Largest possible number for k from 3 to the k power is %d.\n", k - 1);
    return k - 1;
}