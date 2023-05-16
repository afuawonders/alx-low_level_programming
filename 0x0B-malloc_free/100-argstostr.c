#include "main.h"
#include <stdlib.h>
/**
* argstostr - concatenates all the arguments
* @ac: argument count
* @av: argument vector
* Return: concatenated string or Null if it fails
*/
char *argstostr(int ac, char **av)
{
int i, n, r = 0, l = 0;
char *concat;
if (ac == 0 || av == NULL)
return (NULL);
for (i = 0; i < ac; i++)
{
for (n = 0; av[i][n]; n++)
l++;
}
l += ac;
concat = malloc(sizeof(char) * l + 1);
if (concat == NULL)
return (NULL);
for (i = 0; i < ac; i++)
{
for (n = 0; av[i][n]; n++)
{
concat[r] = av[i][n];
r++;
}
if (concat[r] == '\0')
{
concat[r++] = '\n';
}
}
return (concat);
}
