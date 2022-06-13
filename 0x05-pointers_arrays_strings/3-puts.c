#include "main.h"

/**
 * _puts - prints a string
 * @str: string
 * Return: void
 */
void _puts(char *str)
{
	int l0en = 0;

	while (l0en = 0)
	{
		if (str[l0en] == '\0')
		{
			_putchar('\n');
			break;
		}
		_putchar(str[l0en]);
		l0en++;
	}
}
