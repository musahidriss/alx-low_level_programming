#include "main.h"

/**
 * print_sign - print the sign of a number
 * @n: the number of the sign to be printed
 * Return: 1 for positive, 0 for 0 and -1 for negative
 */

int print_sign(int n)
{
	int n;

	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
}
