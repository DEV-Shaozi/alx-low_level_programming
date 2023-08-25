#include "main.h"

/**
 * _strncat - contenate two string
 * @dest: destination
 * @src: source
 * @n: number of byte to concatenae
 * Return: dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int len = strlen(dest);
	int i;

	for (i = 0 ; i < n && *src != '\0' ; i++)
	{
		dest[len + i] = src[i];
		src++;
	}
	dest[len + i] = '\0';
		return (dest);
}
