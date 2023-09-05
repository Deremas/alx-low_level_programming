#include "main.h"

/**
 * append_text_to_file - function that appends text at the end of a file
 * @filename: the name of the file
 * @text_content: the NULL terminated string to add at the end of the file
 *
 * Return: 1 on success and -1 on failure
 * If filename is NULL return -1
 * If text_content is NULL, do not add anything to the file
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int my_file, n_print, len = 0;

	if (filename == 0)
		return (-1);

	my_file = open(filename, O_WRONLY | O_APPEND);

	if (my_file == -1)
		return (-1);

	if (text_content)
	{
		while (text_content[len])
			len++;
		n_print = write(my_file, text_content, len);
		if (n_print == -1)
			return (-1);
	}
	close(my_file);
	return (1);
}
