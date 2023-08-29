#include "main.h"

/**
 * _strchr - locate a character inside a string
 * @s: the string to be searched
 * @c: the character to be located
 *
 * Return: If c is found - a pointer to th first occurence
 * If c is not found - NULL.
 */

char *_strchr(char *s, char c)
{
	int index;

	for (index = 0; s[index] >= '\0'; index++)
	{
		if (s[index] == c)
			return (s + index);
	}

	return ('\0');
}