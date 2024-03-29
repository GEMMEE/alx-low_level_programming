#include "main.h"

/**
  * _memcpy - copies n bytes from memory area src to memory area dest.
  * @dest: pointer to destination string
  * @src: pointer to source string
  * @n: number of bytes to be copied
  *
  * Return: pointer to destination string
  * Author: Gamachu AD
  */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		dest[i] = src[i];
	return (dest);
}


