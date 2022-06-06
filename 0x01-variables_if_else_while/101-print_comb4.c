#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int x, y, z;

	x = 48;
	y = 48;
	z = 48;
	
	while (y < 58)
	{
		x = 48;

		while (x < 58)
		{
			z = 48;

			while (z < 58)
			{
				if (y != x && y != z && x != z &&  y < x && y < z)
				{
					putchar(y);
					putchar(x);
					putchar(z);
					if (x == 56 && y == 55 && z == 57)
					{
						break;
					}
					putchar(',');
					putchar(' ');
				}
				z = z + 1;
			}
			x = x + 1;
		}
		y = y + 1;
	}
	putchar('\n');
	return (0);
}
