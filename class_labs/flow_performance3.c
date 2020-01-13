#include <stdlib.h>
#include <stdio.h>

int main(void)
{
    char operator;
    int first, second;
    printf("IT'S TIME TO CALCULATE: ");
    scanf("%32d%c%32d", &first, &operator, &second);
    switch (operator)
    {
        case '+':
            printf("%d plus %d equals %d\n", first, second, first + second);
            break;
        
        case '-':
            printf("%d minus %d equals %d\n", first, second, first - second);
            break;

        case '*':
            printf("%d times %d equals %d\n", first, second, first * second);
            break;
        
        case '/':
            printf("%d divided by %d equals %.2f\n", first, second, (double) first / second);
            break;

        default:
            printf("You didn't put an operator in the right spot!\n");
            break;
    }
}