#include "main.h"
/**
 * main - Entry block
 * Description: Print a word using _putchar
 * Return: Always 0 (Success)
 */
int main(void)
{
	char c[8] = "_putchar";

	int i = 0;

	while (i < 8)
	{
		_putchar(c[i]);
		i++;
	}

	_putchar('\n');
	return (0);
}
