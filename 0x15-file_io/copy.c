#include "main.h"
#include <stdlib.h>
#include <stdio.h>
#include <fcntl.h>
#include <unistd.h>
char *create_buffer(char *f);
void close_file(int f);

/**
 * create_buffer - function that
 * allocates 1024 bytes for a buffer
 * @f: the name of the file
 * Return: a pointer to the allocate buffer
 */
char *create_buffer(char *f)
{
	char *buffer;

	buffer = malloc(sizeof(char) * 1024);
	if (buffer == NULL)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", f);
		exit(99);
	}
	return (buffer);
}

/**
 * close_file - function that closes
 * @f: file to close
 * Return: no return
 */
void close_file(int f)
{
	int c;

	c = close(f);
	if (c == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close %d\n", f);
		exit(100);
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
	int src, res, read_f, write_f;
	char *buffer;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}

	buffer = create_buffer(argv[2]);
	src = open(argv[1], O_RDONLY);
	read_f = read(src, buffer, 1024);
	res = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC | O_RDONLY | O_APPEND, 0664);

	do {
		if (src == -1 || read_f == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
			free(buffer);
			exit(98);
		}

		write_f = write(res, buffer, read_f);

		if (res == -1 || write_f == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
			free(buffer);
			exit(99);
		}

		read_f = read(src, buffer, 1024);
		res = open(argv[2], O_WRONLY | O_APPEND | O_RDONLY);
	} while (read_f > 0);

	free(buffer);
	close_file(src);
	close_file(res);
	return (0);
}
