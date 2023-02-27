#include "main.h"
/**
 * print_rev - function that prints a string in reverse
 * followed by a new line, to stdout
 * @s: string to print
 * Return: 0
*/
void print_rev(char *s)
{
	int x = 0;
	int o;

	while (*s != '\0')
	{
		x++;
		s++;
	}
	s--;
	for (o = x; o > 0; o--)
	{
		_putchar(*s);
		s--;
	}

	_putchar('\n');
}
