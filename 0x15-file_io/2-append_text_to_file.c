#include <fcntl.h>
#include <unistd.h>
/**
 * append_text_to_file - function that appends text at the end of a file.
 * @filename: name of the file to be created
 * @text_content: content of the file
 * Return: 1 on success, -1 on failure
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int file_open, num_l, len_of_text = 0;

	if (filename == NULL)
		return (-1);
	if (text_content != NULL)
	{
		while (text_content[len_of_text])
			len_of_text++;
	}

	file_open = open(filename, O_WRONLY | O_APPEND);
	num_l = write(file_open, text_content, len_of_text);

	if (file_open == -1 || num_l == -1)
		return (-1);
	close(file_open);

	return (1);
}
