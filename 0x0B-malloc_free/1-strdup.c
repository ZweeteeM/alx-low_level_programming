#include "main.h"
#include <stdlib.h>
/**
 * _strdup - copies the string given as parameter
 * @str: string to duplicate
 * Return: pointer to the copied string (Success), NULL (Error)
 */
char *_strdup(char *str)
{
	char *dupe;
	unsigned int i, len;

	i = 0;
	len = 0;

	if (str == NULL)
		return (NULL);
	while (str[len])
		len++;
	dupe = malloc(sizeof(char) * (len + 1));

	if (dupe == NULL)
		return (NULL);
	while ((dupe[i] = str[i]) != '\0')
		i++;
	return (dupe);
}
