#include "main.h"

/**
 * main - print alphabet in lower case.
 * Description: You can only use "_putchar" twice
 * Return: On success Nothing.
 */


void print_alphabet(void)
{
	char a_z;

	for (a_z = 'a'; a_z <= 'z'; a_z++)
	{
		_putchar(a_z);
	}
	_putchar('\n');
}
