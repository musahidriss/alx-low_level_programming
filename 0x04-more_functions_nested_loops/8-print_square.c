#include "mainn.h"

/**
 * print_square - a function that prints a square, followed by a new line
 * @size: size of both width and length
 * Return: a square made of '#'
 */

void print_square(int size)
{
	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		int co, ro;

		for (co = 0; co < size; co++)
		{
			for (ro = 0; ro < size; ro++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
}
