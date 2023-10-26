#include "main.h"
#include <stdio.h>

/**
 * binary_to_uint ----> binary can be converted through unsigned int
 * @b: String takes binary no or numbers
 * Return: Numbers are coverted
 */

unsigned int binary_to_uint(const char *b)
{
        int m;
        unsigned int a = 0;

        if (!b)
                return (0);
        for (m = 0; b[m]; m++)
        {
                if (b[m] < '0' || b[m] > '1')
                        return (0);
                a = 2 * a + (b[m] - '0');
        }
        return (a);
}

