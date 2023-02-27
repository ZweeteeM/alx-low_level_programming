#include "main.h"
/**
 * puts_half - function that prints half of a string
 * followed by a new line
 * if odd then, n = (length_of_the_string - 1) / 2
 * @str: string to print
 * Return: 0
*/
void puts_half(char *str)
{
		int a, n, x;

	x = 0;

	for (a = 0; str[a] != '\0'; a++)
		x++;

	n = (x / 2);

	if ((x % 2) == 1)
		n = ((x + 1) / 2);

	for (a = n; str[a] != '\0'; a++)
		_putchar(str[a]);
	_putchar('\n');
}
