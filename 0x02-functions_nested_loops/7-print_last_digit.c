#include <stdio.h>
#include "main.h"
/**
  * print_last_digit -print the last digit of number
  * @n: The number to be computed.
  *
  * Return: Value of last digit
*/
int print_last_digit(int n)
{
	int last;

	last = n % 10;

	if (last < 0)
	{
		last = last * -1;
	}

	_putchar(last + '0');

	return (last);
}

