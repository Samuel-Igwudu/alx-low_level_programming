#include <unistd.h>
/**
 * main - Entry point
 *
 * Return: Always 1 (Success)
 */
int main(void)
{
	char ctest1[] = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";

	write(2, ctest1, 59);
	return (1);
}