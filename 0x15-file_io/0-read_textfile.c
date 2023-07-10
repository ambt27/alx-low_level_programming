#include "main.h"
#include <stdlib.h>
#include <fcntl.h>
/**
 * read_textfile - function that reads a text file and prints
 * it to the POSIX standard output.
 * @filename: name of the file
 * @letters: number of letters to be read
 * Return:  the actual number of letters it could read and print
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buffer_for_letter;
	ssize_t file_open, num_l, read_text;

	file_open = open(filename, O_RDONLY);
	if (file_open == -1)
		return (0);
	buffer_for_letter = malloc(sizeof(char) * letters);
	read_text = read(file_open, buffer_for_letter, letters);
	num_l = write(STDOUT_FILENO, buffer_for_letter, read_text);

	free(buffer_for_letter);
	close(file_open);
	return (num_l);

}
