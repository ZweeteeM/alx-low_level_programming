#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 *main -assign a random number to the variable n each time it is executed
 *Return always 0 (success)
*/
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 0)
	{
		printf("%d is poitive\n", n);
	}
	if else (n == 0)
	{
		printf("%d is equal zero\n", n);
	}
	if 
	{
		printf("%d is negative\n", n);
	}
	return (0);
}
