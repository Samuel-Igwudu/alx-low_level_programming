#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/*more headers goes there */
/* betty style doc for function main goes there */
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n, s;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/*your codes goes there */
	s = n % 10;
	if (s > 5)
	{
		printf("Last digit of %d is %d and is greater than 5\n", n, s);
	}
	else if (s == 0)
	{
		printf("Last digit of %d is %d and is 0\n", n, s);
	}
	else
	{
		printf("Last digit of %d is %d and is less than 6 and not 0\n", n, s);
	}
	return (0);
}
