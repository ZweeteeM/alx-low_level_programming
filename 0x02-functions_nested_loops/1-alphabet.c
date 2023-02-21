#include "main.h"
#include <stdio.h>
/**
 *main -  Entry point
 *description Print alphabet
 *Return: Always 0 (success)
*/
void print_alphabet(void)
{
	char c;

	for (c = 'a'; c <= 'z'; c++)
	{
		_putchar(c);
	}

	_putchar('\n');
}
