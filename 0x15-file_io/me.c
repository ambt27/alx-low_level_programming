#include "main.h"
#include <stdlib.h>
#include <stdio.h>
#include <fcntl.h>
#include <unistd.h>
void close_file(int fd);
/**
 * close_file - function that close file
 * @fd: file to close
 * Return: void
 */
void close_file(int fd)
{
	int c;

	c = close(fd);
	if (c == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
		exit(100);
	}
}
/**
 * error_read - function that checks if a file can be opened
 * @src_file: main file
 * @res_file: copy of the main file
 * @argv: number of arguments
 * Return:void
 */
void error_read(int src_file, int res_file, char *argv[])
{
	if (src_file == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	if (res_file == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
		exit(99);
	}
}
/**
 * main - function that copies the content
 * of a file to another file
 * @argc: the number of arguments
 * @argv: array of pointers to the arguments
 * Return: 0 for success
 */
int main(int argc, char *argv[])
{
	int src_file, res_file;
	ssize_t nbchars, nbwr;
	char buffer[1024];

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "%s\n", "Usage: cp file_from file_o");
		exit(97);
	}

	src_file = open(argv[1], O_RDONLY);
	res_file = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC | O_APPEND, 0664);
	error_read(src_file, res_file, argv);

	nbchars = 1024;
	while (nbchars == 1024)
	{
		nbchars = read(src_file, buffer, 1024);
		if (nbchars == -1)
			error_read(-1, 0, argv);
		nbwr = write(res_file, buffer, nbchars);
		if (nbwr == -1)
			error_read(0, -1, argv);
	}
	close_file(src_file);
	close_file(res_file);
	return (0);
}
