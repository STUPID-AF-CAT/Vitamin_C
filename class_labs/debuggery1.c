#include <stdio.h>

int main()
{
    int x,y;
    y = 0;
    for (x=0; x<10; x++)
    {
        y = y+x;
        if (y > 10)
        {
            x--;
        }
    }
}