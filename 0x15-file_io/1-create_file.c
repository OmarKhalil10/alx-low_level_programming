#include "main.h"
/**
 * create_file - function that creates a file.
 * @filename: is the name of the file to create
 * @text_content: is a NULL terminated string to write to the file
 * Return: 1 on success, -1 on failure (file can not be created,
 * file can not be written, write “fails”, etc…)
 */
int create_file(const char *filename, char *text_content)
{
	int i;
	int fd;
	int writing;

	if (filename == NULL)
	{
		return (-1);
	}
	fd = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	if (fd == -1)
	{
		return (-1);
	}
	if (text_content)
	{
		i = 0;
		while (text_content[i] != '\0')
		{
			i++;
		}
		writing = write(fd, text_content, i);
		if (writing == -1)
		{
			return (-1);
		}
	}
	close(fd);
	return (1);
}
