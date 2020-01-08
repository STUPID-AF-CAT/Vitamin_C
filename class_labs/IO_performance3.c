#include <stdlib.h>
#include <stdio.h>

/*
Demonstration Lab 4
Formatted I/O

Formatted Input (Strings)

    Read a string into a char array
    Specify a field-width to protect against buffer overflow
    Ensure the field-width leaves room for the nul-terminator
    Stop reading at the first capital letter or new line

Demonstration Lab 5
Formatted I/O (scanf)

Formatted Input (Numbers)

    Read three ints, representing the date, from one line
    Format the input so the integers are separated by a dash (-) as <mm>-<dd>-<yyyy>
    Output the results as a date with leading zeros <mm>/<dd>/<yyyy>
    Specify the field width of the output appropriately
*/

//also performance lab 8 I guess

int main(void)
{
    //this here is demo 4, no explanation needed
    char demo4 [42];
    printf("Gimme dem strangs: ");
    scanf("%41[a-z ]s", demo4);
    printf("%s\n", demo4);

    //this here is demo 5
    int mm, dd, yyyy;
    printf("Listen here, you gotta gib me dem dates: ");
    scanf("%d-%d-%d", &mm, &dd, &yyyy);
    printf("%02d/%02d/%04d\n", mm, dd, yyyy);

    //performance lab 8, or as I named it: IO_performance3
    

    return 0;
}