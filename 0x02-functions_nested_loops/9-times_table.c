#include "main.h"

/**
 * times_table - Function prints the 9 times table, starting with 0.
 *
 * Description: Funtion prints the 9 times table, starting with 0.
 *
 * Return: void datatype is returned.
 **/

void times_table(void)
{
	int i, j, multiply;

	for (j = 0; j < 10; j++)
	{
		for (i = 0; i < 10; i++)
		{
			multiply = i * j;
			if (i == 0)
			{
				_putchar(multiply + '0');
			}
			else if (multiply >= 10)
			{
				_putchar(' ');
				_putchar(multiply / 10 + '0');
				_putchar(multiply % 10 + '0');
			}
			else
			{
				_putchar(' ');
				_putchar(' ');
				_putchar(multiply + '0');
			}
			if (i != 9)
			{
				_putchar(',');
			}
		}
		_putchar('\n');
	}
}

