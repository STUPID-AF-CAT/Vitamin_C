#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    char choice;
    printf("Enter e for even or o for odd, anything else and you get shot: ");
    choice = getchar();

    if (choice == 'e')
    {
        for (int x = 0; x < 101; x++)
        {
            if (x % 2 == 0)
            {
                printf("%d ", x);
            }
        }
        printf("\n");
    }
    else if (choice == 'o')
    {
        int x = 0;
        while (x < 101)
        {
            if (x % 2 == 1)
            {
                printf("%d ", x);
            }
            x++;
        }
        printf("\n");
    }
    else
    {
        printf("\nListen here, I didn't attend Programmer U just to\n"
                "have some weasel mess with my code the way you just did.\n\n");
    }
    
    return 0;
}