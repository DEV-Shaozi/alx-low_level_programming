#include "main.h"

/**
 * _isalpha -  check for alphabetic character
 * @c: the character to be checked
 * Return: 1 if alphabetic 0 if nothing
 */

int _isalpha(int c)
{
	if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
	{
		return (1);
	}
	return (0);
}
