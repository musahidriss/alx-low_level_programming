#include "main.h"

/**
 * cap_string - capitalizes all words of a string
 * @z: the string to look at
 * Return: the capitalized string
 */

char *cap_string(char *z)
{
	int index = 0;

	while (str[index])
	{
		while (!(str[index] >= 'a' && str[index] <= 'z'))
			index++;

		if (str[index - 1] == ' ' ||
			str[index - 1] == '\t' ||
			str[index - 1] == '\n' ||
			str[index - 1] == ',' ||
			str[index - 1] == ';' ||
			str[index - 1] == '.' ||
			str[index - 1] == '!' ||
			str[index - 1] == '?' ||
			str[index - 1] == '"' ||
			str[index - 1] == '(' ||
			str[index - 1] == ')' ||
			str[index - 1] == '{' ||
			str[index - 1] == '}' ||
			index == 0)
			str[index] -= 32;
		index++;
	}

	return (str);
}
