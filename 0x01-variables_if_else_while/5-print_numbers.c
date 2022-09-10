#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Print all single digit number
 * of base 10 starting from 0
 *
 * Return: 0 (Success!)
 */

int main(void)
{
	int num;

	for (num = 0; num <= 9; num++)
	{
		printf("%d", num);
	}
	putchar('\n');

	return (0);
}
