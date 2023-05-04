#include "main.h"
/**
* _strncat - concatenate two strings
* use at most n bytes from src
* @dest: input value
* @src: input value
* @n: input value
* Return: dest
*/
char *_strncat(char *dest, char *src, int n)
{
int k;
int m;
k = 0;
while (dest[k] != '\0')
{
k++;
}
m = 0;
while (m < n && src[m] != '\0')
{
dest[k] = src[m];
k++;
m++;
}
dest[m] = '\0';
return (dest);
}
