#include "main.h"

/**
 * *_strcpy - pointer to character
 *
 * @dest: string 1 pointer to a character
 * @src: string 2 pointer to a character
 * Return: character (dest)
 */
char *_strcpy(char *dest, char *src)
{
	int i;

	for (i = 0; src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}
	dest[i] = '\n';

	return (dest);
}
