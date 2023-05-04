#include "main.h"
#include <stdio.h>
/**
* rot13 - encoder rot13
* @s: pointer to string params
* Return: *s
*/
char *rot13(char *s)
{
int k;
int m;
char data1[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
char datarot[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";
for (k = 0; s[k] != '\0'; k++)
{
for (m = 0; m < 52; m++)
{
if (s[k] == data1[m])
{
s[k] = datarot[m];
break;
}
}
}
return (s);
}
