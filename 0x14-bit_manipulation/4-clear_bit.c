#include "main.h"
#include <stdlib.h>
/**
 * clear_bit - This prog sets the value of a bit to 0 at a given index
 * @n: parameter
 * @index: index
 * Return: 1 if success, -1 if error
 */
int clear_bit(unsigned long int *n, unsigned int index)
{

	unsigned long int mask = 1 << index;

		if (index < sizeof(n) * 8)
		{
			*n = (*n & ~mask);
			return (1);
		}

		return (-1);
}
