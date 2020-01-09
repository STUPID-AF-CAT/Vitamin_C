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
    char first_name [15], middle_name [15], last_name [15];
    printf("Give your first, middle, and last name. Separate them using a tab: ");
    scanf("%14s\t%14s\t%14s", first_name, middle_name, last_name);
    printf("%s\t\n%s\t\n%s\t\n", first_name, middle_name, last_name);

    int int_one, int_two;
    printf("Now give me to integers separated by a * : ");
    scanf("%d*%d", &int_one, &int_two);
    printf("The result of %d multiplied by %d is %d.\n", int_one, int_two, 
            int_one * int_two);

    return 0;
}
