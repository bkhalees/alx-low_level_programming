#include <stdio.h>

/**
 * _puts - print string to stdout.
 *
 * @str: value to be evaluate.
 *
 * Return: nothing, void.
 */
void _puts(char *str)
{
	int i;

	for (i = 0; *str != '\0'; str++)
	putchar(*(str + i));

	putchar('\n');
}
