#include "main.h"
/**
  * main - entry point
  * program that copies the content of a file to another file.
  * @argc: is ...
  * @argv: is ...
  * Return: 0 sucess
  */
int main(int argc, char **argv)
{
	int from;
	int to;
	ssize_t writer;
	ssize_t length;
	char buf[1024];

	if (argc != 3)
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n"), exit(97);
	from = open(argv[1], O_RDONLY);
	to = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
	length = read(from, buf, 1024);
	if (length == -1)
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n",
		argv[1]), exit(98);
	while (length != '\0')
	{
		writer = write(to, buf, length);
		if (from == -1 || writer != length)
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n",
			argv[2]), exit(99);
		length = read(from, buf, 1024);
		if (length == -1)
			dprintf(STDERR_FILENO,
			"Error: Can't read from file %s\n", argv[1]), exit(98);
	}
	length = close(to);
	writer = close(from);
	if (length == -1)
		dprintf(STDERR_FILENO, "Error: Can't close fd %i\n", to),
		exit(100);
	if (writer == -1)
		dprintf(STDERR_FILENO, "Error: Can't close fd %i\n", from),
		exit(100);
	return (0);
}
