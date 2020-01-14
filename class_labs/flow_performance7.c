#include <stdlib.h>
#include <stdio.h>

int main(void)
{
    printf("Enter a number, or anything greater than 999 to quit.\n");
    while (1)
    {
        u_int32_t x;
        scanf("%32d", &x);
        if (x > 999)
        {
            break;
        }
        else
        {
            printf("You entered %d\n", x);
            int i = 0;
            int divs [21] = {0};
            int j = 0;

            while (1)
            {
                if (i == 0)
                {
                    i++;
                    continue;
                }
                else if (x % i == 0)
                {
                    divs[j] = i;
                    j++;
                    if (x == i || j == 20)
                    {
                        break;
                    }
                    else
                    {
                        i++;
                        continue;
                    }
                    
                }
                else
                {
                    i++;
                    continue;
                }
            }

            printf("These are the first numbers %d is divisible by (up to 20 numbers):\n", x);
            for (int v = 0; v < j; v++)
            {
                printf("%d ", divs[v]);
            }
            printf("\nEnter a number greater than 999 to exit.\n");
            continue;
        }
    }


    return 0;
}