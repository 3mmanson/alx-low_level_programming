#include "main.h"

/**
 * print_last_digit - prints the last digit of a number
 *
 * @n: An integer input
 *
 * Return: last digit of number n
 */

int print_last_digit(int n)
{
	int last;

	if (n > 0)
	{
		last = n % 10;
		_putchar(last + '0');
		return (last);
	}
	else
	{
		last = -1 * (n % 10);
		_putchar(last + '0');
		return (last);
	}
}
