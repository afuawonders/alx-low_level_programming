#include "main.h"
/**
* flip_bits - returns number of bits you would need to flip
* @n: first long unsigned number
* @m: second long unsigned number
* Return: returns the count
*/
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
int i, count = 0;
unsigned long int current;
unsigned long int exclusive = n ^ m;
for (i = 63; i >= 0; i--)
{
current = exclusive >> i;
if (current & 1)
count++;
}
return (count);
}
