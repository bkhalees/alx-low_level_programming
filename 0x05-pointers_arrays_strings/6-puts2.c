#include "stdio.h"

/**
 * puts2 - skip values by 1ine string.
 *
 * @str: type char.
 *
 * Return: void.
 */
void puts2(char *str)
{
	int len = 0;
	int i = 0;
	char *j = str;
	int k;

	while (*j != '\0')
	{
		j++;
		len++;
	}
	i = len - 1;
	for (k = 0 ; k <= i ; k++)
	{
	if (k % 2 == 0)
	{
		putchar(str[k]);
	}
	}
	putchar('\n');
}
