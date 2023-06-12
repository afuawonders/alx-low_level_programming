#include "main.h"
/**
* create_file - Creates a file.
* @filename: the name of the file to create.
* @text_content: is a NULL-terminated string to write to the file.
* Return: 1 on success, -1 if the function fails to
* create the file or write to it.
*/
int create_file(const char *filename, char *text_content)
{
int fd, w, c_len = 0;
if (filename == NULL)
return (-1);
if (text_content != NULL)
{
for (c_len = 0; text_content[c_len];)
c_len++;
}
fd = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
w = write(fd, text_content, c_len);
if (fd == -1 || w == -1)
return (-1);
close(fd);
return (1);
}
