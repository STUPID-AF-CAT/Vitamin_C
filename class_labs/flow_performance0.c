#include <stdlib.h>
#include <stdio.h>

int main(void)
{
    char da_array [64] = {0};
    printf("Whatchu want: ");
    scanf("%63s", da_array);
    if ((da_array[0] >= 32) && (da_array[0] < 126))
    {
        printf("%s\n", da_array);
    }
    else
    {
        printf("You fucking donkey.\n");
    }
    
    
    return 0;
}