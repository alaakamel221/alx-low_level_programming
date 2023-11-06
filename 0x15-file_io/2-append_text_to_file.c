#include "main.h"

/**
 * str_len - ffff
 * @s: ptr
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
 * append_text_to_file - is func
 * @filename: char ptr to file name
 * @text_content: text
 * Return: int
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int fd;
	size_t bytes = 0, len = str_len(text_content);

	if (!filename && !text_content)
		return (-1);
	if (!text_content)
		return (1);

	fd = open(filename, O_WRONLY | O_APPEND);
	if (fd == -1)
		return (-1);
	if (len)
		bytes = write(fd, text_content, len);
	close(fd);
	return (len == bytes ? 1 : -1);
}
