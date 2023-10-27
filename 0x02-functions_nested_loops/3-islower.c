#include "main.h"

/*
 * _islower - lower case
 * @c: the character to be checked
 * Return: 1 for lowercase letter 0 for nothing
 */

int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	return (0);
}
