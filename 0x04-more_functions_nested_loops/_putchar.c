#include <unistd.h>
#include "main.h"

/**
 * _putchar - writes te character c to stdout
 * @c: the character to print
 * Return: 1 for success else -1
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
