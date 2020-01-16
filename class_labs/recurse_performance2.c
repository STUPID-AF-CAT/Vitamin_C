#include <stdio.h>
#include <stdlib.h>



int main(void)
{
    static int x = 1;
    printf("Main has been called %d times.\n", x);
    x++;
    
    if (x == 11)
    {
        printf("End of recursive main reached.\n");
        return 0;
    }
    else
    {
        main();
    }
    
}