#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/stat.h>
#include <sys/types.h>
#include <fcntl.h>
#include "main.h"

/**
 * _strlen - find string length
 * @str: string
 * Return: length
 */
int _strlen(const char *str)
{
	int len;

	for (len = 0; str[len] != '\0'; len++)
		;
	return (len);
}
/**
 * create_file - creates a file
 * @filename: the name of the file to be created
 * @text_content: the content to be inserted to the created file
 *
 * Return: 1 on success, -1 on failure
 */
int create_file(const char *filename, char *text_content)
{
	int fd, n_wrote;

	if (filename == NULL)
		return (0);

	fd = open(filename, O_CREAT | O_RDWR | O_TRUNC, 00600);
	if (fd == -1)
		return (-1);

	if (text_content != NULL)
	{
	n_wrote = write(fd, text_content, _strlen(text_content));
	if (n_wrote == -1)
	{
		close(fd);
		return (-1);
	}
	}
	close(fd);
	return (1);
}
