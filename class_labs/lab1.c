#include <stdio.h>
#include <stdlib.h>

/*
* WOOOOOO!
*
* GETTIN SIZES AND STUFF!
*
* YEAHHHHH!
*
*/

int main(void)
{
    int the_intiest = 21;
    float the_floatiest = 22.99;
    double the_doobliest = 23.8765;
    char char_bear = 'q';

    printf("Your integer is %d with size of %ld \n", the_intiest, sizeof(the_intiest));
	printf("Your float is %f with size of %ld \n", the_floatiest, sizeof(the_floatiest));
	printf("Your double is %lf with size of %ld \n", the_doobliest, sizeof(the_doobliest));
	printf("Your first is %c with size of %ld \n", char_bear, sizeof(char_bear));
	
	return 0;
}