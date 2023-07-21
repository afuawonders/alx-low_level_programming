#include <stdio.h>
#include <string.h>
#include <stdlib.h>

char generate_first_char(char *username)
{
char *l = "A-CHRDw87lNS0E9B2TibgpnMVys5XzvtOGJcYLU+4mjW6fxqZeF3Qa1rPhdKIouk";
size_t len = strlen(username);
return (l[(len ^ 59) & 63]);
}

char generate_second_char(char *username)
{
char *l = "A-CHRDw87lNS0E9B2TibgpnMVys5XzvtOGJcYLU+4mjW6fxqZeF3Qa1rPhdKIouk";
size_t len = strlen(username);
unsigned int add = 0;
for (unsigned int i = 0; i < len; i++)
add += username[i];
return (l[(add ^ 79) & 63]);
}

char generate_third_char(char *username)
{
char *l = "A-CHRDw87lNS0E9B2TibgpnMVys5XzvtOGJcYLU+4mjW6fxqZeF3Qa1rPhdKIouk";
unsigned int b = 1;
size_t len = strlen(username);
for (unsigned int i = 0; i < len; i++)
b *= username[i];
return (l[(b ^ 85) & 63]);
}

char generate_fourth_char(char *username)
{
char *l = "A-CHRDw87lNS0E9B2TibgpnMVys5XzvtOGJcYLU+4mjW6fxqZeF3Qa1rPhdKIouk";
char b = username[0];
size_t len = strlen(username);
for (unsigned int i = 0; i < len; i++)
{
if (username[i] >= b)
b = username[i];
}
srand(b ^ 14);
return (l[rand() & 63]);
}

char generate_fifth_char(char *username)
{
char *l = "A-CHRDw87lNS0E9B2TibgpnMVys5XzvtOGJcYLU+4mjW6fxqZeF3Qa1rPhdKIouk";
unsigned int b = 0;
size_t len = strlen(username);
for (unsigned int i = 0; i < len; i++)
b += username[i] * username[i];
return (l[(b ^ 239) & 63]);
}

char generate_sixth_char(char *username)
{
char *l = "A-CHRDw87lNS0E9B2TibgpnMVys5XzvtOGJcYLU+4mjW6fxqZeF3Qa1rPhdKIouk";
unsigned int b = 0;
for (unsigned int i = 0; i < username[0]; i++)
b = rand();
return (l[(b ^ 229) & 63]);
}

int main(int argc, char *argv[])
{
if (argc != 2)
{
printf("Correct usage: ./keygen5 username\n");
return (1);
}

char key[7];
key[0] = generate_first_char(argv[1]);
key[1] = generate_second_char(argv[1]);
key[2] = generate_third_char(argv[1]);
key[3] = generate_fourth_char(argv[1]);
key[4] = generate_fifth_char(argv[1]);
key[5] = generate_sixth_char(argv[1]);
key[6] = '\0';

printf("%s\n", key);
return (0);
}
