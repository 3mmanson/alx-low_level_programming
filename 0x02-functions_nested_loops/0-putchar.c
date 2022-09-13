#include <unistd.h>
#include "main.h"

/**
 * main - Print "_putchar" followed by a new line.
 * Description: You are not allowed to include standard libraries.
 *
 * Return: 0.
 */
int main(void)
{
	char text[8] = "_putchar";
	int i;

	for (i = 0; i < 8; i++)
	{
		_putchar(text[i]);
	}
	_putchar('\n');
	return (0);
}
