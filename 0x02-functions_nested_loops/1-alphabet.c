#include "main.h"

/**
 * main - check the code 
 *
 * Return: Always 0.
 */
int main(void)
{
	char alp[27] = ("abcdefghijklmnopqrstuvwxyz");
	int i;

	for (i = 0; i < 26; i++)
	{
		_putchar(alp[i]);
	}
	_putchar('\n');
	return (0);
}
