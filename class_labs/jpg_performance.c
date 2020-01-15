//includes the header file stdio for standard input and output
#include <stdio.h>

//declares the function before main
unsigned int mystery(unsigned int a, unsigned int b); //function prototype

//starts the main function
int main(void)
{
    //prompt to get integers from user
    printf("%s", "Enter two positive integers: ");
    unsigned int x; //first integer
    unsigned int y; //second integer
    scanf("%u%u", &x, &y);

    //prints the results of the mystery function
    printf("The result is %u\n", mystery(x, y));
}

//Parameter b must be a positive integer
//to prevent infinite recursion

//defines the function mystery
unsigned int mystery(unsigned int a, unsigned int b)
{
    //base case
    if (1 == b)
    {
        return a;
    }
    //this function is multiplication using recursive addition
    else
    {
        //recursive step
        return a + mystery(a, b-1);
    }
    
}