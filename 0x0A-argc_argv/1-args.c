#include <stdio.h>
#include "main.h"
/**
* main - print the number of arguments passed into program
* @argc: number of arguments passed
* @argv: array of strings containing argument
* Return: Always 0 (Success)
*/
int main(int argc, char *argv[])
{
(void) argv; /*Ignore argv*/
printf("%d\n", argc - 1);
return (0);
}
