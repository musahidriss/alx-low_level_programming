#include <stdio.h>

/**
 * main - prints alphabets in lower case except q and e
 *
 * Return: Always 0
 */

int main(void)
{
	char lca;

	for (lca = 'a'; lca <= 'z'; lca++)
	{
		if (lca != 'q' && lca != 'e')
		putchar(lca);
	}
	putchar('\n');
	return (0);
}
