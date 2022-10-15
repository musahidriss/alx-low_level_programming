#include <stdio.h>

/**
 * main - prints all combination of single digits
 *
 * Return: Always 0
 */

int main(void)
{
	int num;

	for (num = 48; num < 58; num++)
	{
		putchar(num);
				if (num != 57)
				putchar(',');
				putchar(' ');
	}
	putchar('\n');
	return (0);
}
