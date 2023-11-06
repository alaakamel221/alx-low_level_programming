#include "main.h"

/**
 * str_len - is func
 * @s: char ptr
 * Return: int
 */
int str_len(char *s)
{
	int i = 0;

	if (!s)
		return (0);
	while (*s++)
		i++;
	return (i);
}


/**
* create_file - is fun
* @filename: char ptr to file name
* @text_content: file content
* Return: int
*/
int create_file(const char *filename, char *text_content)
{
	int fd;
	size_t bytes = 0, len = str_len(text_content);

	if (!filename)
		return (-1);
	fd = open(filename, O_WRONLY | O_CREAT |  O_TRUNC, 0600);
	if (fd == -1)
		return (-1);
	if (len)
		bytes = write(fd, text_content, len);
	close(fd);
	return (bytes == len ? 1 : -1);
}
