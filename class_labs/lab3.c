#include <stdlib.h>
#include <stdio.h>

int main()
{
    int no_dot = 77;
    float one_dot = 10.15;
    double one_dot_plus = 10.123456789;
    char one_byte = 'f';

    float f_no_dot = (float) no_dot;
    printf("%f\n", f_no_dot);
    char c_no_dot = (char) no_dot;
    printf("%c\n", c_no_dot);
    double d_one_dot = (double) one_dot;
    printf("%lf\n", d_one_dot);
    float f_one_dot_plus = (double) one_dot_plus;
    printf("%f\n", f_one_dot_plus);
    int c_one_byte = (int) one_byte;
    printf("%d\n", c_one_byte);
    char test_num = (char) 33;
    printf("%c\n", test_num);

    return 0;
}