#include "main.h"

/**
 * print_numbers - checks for checks for a digit (0 through 9).  
 * Return: Always 0.
 */
void print_numbers(void)
{
		char c = '0';

		while (c <= '9')
		{
			_putchar(c);
			c++;
		}
_putchar('\n');
}
