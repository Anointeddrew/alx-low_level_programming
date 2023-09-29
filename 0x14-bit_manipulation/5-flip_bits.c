#include "main.h"

/**
 * flip_bits - counts the number of bits to change
 * to get from one number to another
 * @n: first number
 * @m: second number
 *
 * Return: number of bits to change
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int d, num = 0;
	unsigned long int exist;
	unsigned long int sole = n ^ m;

	for (d = 63; d >= 0; d--)
	{
		exist = sole >> d;
		if (exist & 1)
			num++;
	}

	return (num);
}
