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
	int i = 0;
	int x = 0;

	while (*(src + i) != '\0')
	{
		i++;
	}
	for ( ; x < i ; x++)
	{
		dest[x] = src[x];
	}
	dest[i] = '\0';
	return (dest);
}
