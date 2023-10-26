#include "main.h"

/**
 * print_binary ----> Equivalent of a decimal number that prints a binary
 * @n: Amount or no binary to be printed
 */

void print_binary(unsigned long int n)
{
        int t, d = 0;
        unsigned long int new;

        for (t = 63; t >= 0; t--)
        {
                new = n >> t;
                if (new & 1)
                {
                        _putchar('1');
                        d++;
                }
                else if (new)
                        _putchar('0');
        }
        if (!new)
                _putchar('0');
}

