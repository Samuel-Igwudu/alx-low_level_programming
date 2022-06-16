#include "main.h"

/**
 * _strncat - concatenates two string
 * @dest: destination
 * @src: source
 * @i: amount of bytes
 * Return: dest
 */
char *_strcat(char *dest, char *src, int n)
{
	int count = 0, int count1 = 0;

	while (*(dest + count) != '\0')
	{
		count++;
	}

	while (count1 < n)
	{
		*(dest + count) = *(src + count1);
		if (*(src + count1) == '\0')
			break;
		count++;
		count1++;
	}
	return (dest);
}
