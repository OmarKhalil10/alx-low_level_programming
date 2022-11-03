#include "main.h"
/**
 * append_text_to_file - function that appends text at the end of a file.
 * @filename:  is the name of the file
 * @text_content: is the NULL terminated string to add at the end of the file
 * Return: 1 on success and -1 on failure
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int i;
	int fd;
	int writing;

	if (filename == NULL)
	{
		return (-1);
	}
	fd = open(filename, O_WRONLY | O_APPEND);
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
