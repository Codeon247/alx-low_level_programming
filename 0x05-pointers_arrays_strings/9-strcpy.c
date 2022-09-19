#include "main.c"
#include <stdio.h>

/**
 * _strcpy - copies a string a string pointed by @src
 * erminating null byte to a buffer ppointed by @dest
 * @dest: a buffer
 * @src: a source string to copy
 *
 * Return: a pointer to th destination
 */
char *_strcpy(char *dest, char *src)

{
	int count = 0;
	while (count >= 0)
	{	
		*(dest + count) = *(src + count);
	if (*(src + count) == '\0')
	break;
	count++;
	}
return (dest);
}
