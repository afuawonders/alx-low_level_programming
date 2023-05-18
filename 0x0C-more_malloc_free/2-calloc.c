#include <stdlib.h>
#include "main.h"
/**
* *_memset - fills a memory area with a constant byte
* @s: pointer to the memory area to be filled
* @b: character to copy into memory area
* @n: number of times to copy the character
* Return: pointer to the memory area s
*/
char *_memset(char *s, char b, unsigned int n)
{
unsigned int i;
for (i = 0; i < n; i++)
{
s[i] = b;
}
return (s);
}
/**
* *_calloc - allocates memory for an array
* @nmemb: number of elements in the array
* @size: size of each element in bytes
* Return: pointer to allocated memory, Null if it fails
*/
void *_calloc(unsigned int nmemb, unsigned int size)
{
char *ptr;
if (nmemb == 0 || size == 0)
return (NULL);
ptr = malloc(size * nmemb);
if (ptr == NULL)
return (NULL);
_memset(ptr, 0, nmemb * size);
return (ptr);
}
