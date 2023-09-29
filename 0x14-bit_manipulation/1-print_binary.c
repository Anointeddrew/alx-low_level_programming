#include "main.h"

/**
 * print_binary - prints the binary equivalent of a decimal number
 * @n: number to print in binary
 */
void print_binary(unsigned long int n)
{
	int d, num = 0;
	unsigned long int exist;

	for (d = 63; d >= 0; d--)
	{
		exist = n >> d;

		if (exist & 1)
		{
			_putchar('1');
			exist++;
		}
		else if (exist)
			_putchar('0');
	}
	if (!exist)
		_putchar('0');
}
