#include "main.h"
/**
* append_text_to_file - Appends text at the end of a file.
* @filename: the name of the file.
* @text_content: is the NULL terminated string to add at the end of the file
* Return: 1 on success, -1 if the function fails to
* create the file or write to it.
*/
int append_text_to_file(const char *filename, char *text_content)
{
int o, w, c_len = 0;
if (filename == NULL)
return (-1);
if (text_content != NULL)
{
for (c_len = 0; text_content[c_len];)
c_len++;
}
o = open(filename, O_WRONLY | O_APPEND);
w = write(o, text_content, c_len);
if (o == -1 || w == -1)
return (-1);
close(o);
return (1);
}
