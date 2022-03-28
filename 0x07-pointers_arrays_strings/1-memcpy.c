#include "main.h"

/**
 * _memcpy - copies memory area
 * @dest: destination of copy
 * @src: memory area to copy
 * @n: number of bytes to copy
 *
 * Return: pointer to the destination buffer @dest.
 */
char * _memcpy (char *dest, char *src, unsiigned int n)
{
	unsigned int i;
	for (i=o; i < n; i++)
	{
		* (dest + i) = * (src + i);
	}
	return (dest);
}
