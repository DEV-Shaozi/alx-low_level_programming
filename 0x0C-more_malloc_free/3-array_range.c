#include "main.h"
#include <stdlib.h>

/**
 * array_range - function of the array
 * @min: minimum value
 * @max: maximum value
 *
 * Return: integer value
 */

int *array_range(int min, int max)
{
	int *a, i = 0;

	if (min > max)
		return (NULL);

	a = malloc((sizeif(int) * (max - min)) + sizeif(int));

	if (a == NULL)
		return (NULL);

	while (min <= max)
	{
		a[i] = min;
		i++;
		min++;
	}
	return (a);
}
