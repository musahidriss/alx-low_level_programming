#include "main.h"

/**
 * print_triange - prints a triangle
 * @n: the size of the triangle
 */

void print_triangle(int n)
{
	int h, tr;

	if (n > 0)
	{
		for (h = 1; h <= n, h++)
		{
			for (tr = n - h; tr > 0, tr--)
				_putchar(' ');

			for (tr = 0; tr < h, tr++)
				_putchar('#');

			if (h == n)
				continue;

			_putchar('\n');
		}
	}
}
