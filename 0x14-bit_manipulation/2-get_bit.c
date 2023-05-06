#include "main.h"

/**
 * get_bit - Gets the value of a bit at a given index.
 * @n: The bit.
 * @index: The index to get the value at - indices start at 0.
 *
 * Return: If an error occurs - -1.
 *         Otherwise - The value of bit at index.
 */
int get_bit(unsigned long int n, unsigned int index)
{
	if (index >= sizeof(unsigned long int) * 8)
		return (-1);
	return ((n >> index) & 1);
}

/*
 *	unsigned int i;
 *	unsigned long int temp = 0, remainder = 0;
 *
 *	if (n == 0)
 *		return (0);
 *
 *	i = 0;
 *	while (n != 0 && i <= index)
 *	{
 *		temp = n;
 *		n = temp >> 1;
 *		remainder = temp - (2 * n);
 *		i++;
 *	}
 *	if (index >= i)
 *		return (-1);
 *	return (remainder);
 */
