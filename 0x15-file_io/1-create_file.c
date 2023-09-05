#include "main.h"

/**
 * create_file - function that creates a file filename
 * @filename: the name of file to create
 * @text_content: a NULL terminated string to write to the file
 *
 * Return: 1 on success, -1 on failure (
 */

int create_file(const char *filename, char *text_content)
{
	int my_file, written_num, len = 0;

	if (filename == 0)
		return (-1);

	my_file = open(filename, O_RDWR | O_CREAT | O_TRUNC, 0600);

	if (my_file == -1)
		return (-1);

	if (text_content)
	{
		while (text_content[len])
			len++;
		written_num = write(my_file, text_content, len);

		if (written_num == -1)
			return (-1);
	}
	close(my_file);
	return (1);
}
