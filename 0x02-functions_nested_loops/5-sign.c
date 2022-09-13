#include "main.h"

/**
 * print_sign - prints the sign of a number
 *
 * @n: An integer input
 * 
 * Return: 1, 0, -1 and sign of n
 */

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
	
		_putchar('0');
		return (0);
	}
	else
	{
	
		_putchar('-');
		return (-1);
	}
}
