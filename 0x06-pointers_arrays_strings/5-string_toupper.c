#include "main.h"

/**
 * string_toupper - changes all lowercase letters of a string to uppercase
 * @str: pointer to the string
 *
 * Return: pointer to the string.
 * Author: Gamachu AD
 */

char *string_toupper(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
		if (str[i] <= 'z' && str[i] >= 'a')
			str[i] -= 32;
	return (str);
}

