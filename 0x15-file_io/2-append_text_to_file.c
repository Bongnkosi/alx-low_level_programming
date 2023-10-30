#include"main.h"
#include <stdlib.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>

/**
 * append_text_to_file - that appends text at the end of a file
 * @filename: variable pointer
 * @text_content: content file
 * Description: function that appends text at the end of a file
 * Return: 1 on success, -1 on failure
 */

int append_text_to_file(const char *filename, char *text_content)
{
	ssize_t len = 0;

	if (!str)
		return (-1);

	while (*str++)
		++len;

	return (len);
}

/**
 * append_text_to_file - append text to the end of a file
 * @filename: the name of the file to append to
 * @text_content: the data to append to filename
 *
 * Return: Upon success, return 1. Otherwise, return -1.
 */
int append_text_to_file(const char *filename, char *text_content)
{
	ssize_t b_written = 0;
	int fd;

	if (!filename)
		return (-1);

	fd = open(filename, O_WRONLY | O_APPEND);

	if (fd < 0)
		return (-1);

	if (text_content)
		b_written = write(fd, text_content, _strlen(text_content));

	close(fd);

	if (b_written < 0)
		return (-1);
	return (1);
}
