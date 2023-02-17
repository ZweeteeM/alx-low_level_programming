#include <stdio.h>
/**
 *main - Entry point
 *Return: Always 0 (success)
*/
int main(void)
{
	int ch;

	clrscr();
	printf(“Print all uppercase letters followed by all lowercase letters\n”);
	for (ch = ‘A’; ch <= ‘Z’; ch++)
	{
		putchar(ch);
	}
	putchar (‘\n’);
	for (ch = ‘a’; ch <= ‘z’; ch++)
	{
		putchar(ch);
	}
	putchar (‘\n’);
	getch();
}
