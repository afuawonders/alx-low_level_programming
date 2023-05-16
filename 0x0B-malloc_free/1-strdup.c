#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
* _strdup - returns a pointer to a new string
* @str: char
* Return: Null (0)
*/
char *_strdup(char *str)
{
char *alx;
int i, r = 0;
if (str == NULL)
return (NULL);
i = 0;
while (str[i] != '\0')
i++;
alx = malloc(sizeof(char) * (i + 1));
if (alx == NULL)
return (NULL);
for (r = 0; str[r]; r++)
alx[r] = str[r];
return (alx);
}
