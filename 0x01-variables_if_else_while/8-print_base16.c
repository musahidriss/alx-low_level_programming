#include <stdio.h>

/**
 * main - prints numbers 0 to 9 and alphabets 'a' to 'f'
 *
 * Return: Always 0
 */

int main(void)
{
	char al;
	int num;

	for (num = 0; num <= 9; num++)
	{
		putchar((num % 10) + '0');
	}
	for (al = 'a'; al <= 'f'; al++)
	{
		putchar(al);
	}
	putchar('\n');
	return (0);
}
