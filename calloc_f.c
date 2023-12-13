#include "main.h"

/**
 * _calloc - Una función que asigna memoria para una matriz, usando malloc
 * @narr: una matriz
 * @size: tamaño.
 * Return: La puntero o bien: NULL.
 */

void *_calloc(unsigned int narr, unsigned int size)
{
	unsigned int ind = 0;
	char *pt = NULL;

	if (narr == 0 || size == 0)
		return (NULL);

	pt = malloc(narr * size);

	if (pt == NULL)
		return (NULL);

	for (; ind < (narr * size); ind++)
		pt[ind] = 0;

	return (pt);
}

