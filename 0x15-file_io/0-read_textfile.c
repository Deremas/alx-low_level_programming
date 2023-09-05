#include "main.h"

/**
 * read_textfile - function thaat reads a text file and prints it
 * @filename: The name of the file
 * @letters: the number of the letters to be reads and printed
 *
 * Return: the actual number of letters it could read and print, otherwise 0
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int my_file, num_to_print, written_num;
	char *buffer;

	if (!filename)
		return (0);

	my_file = open(filename, O_RDONLY);
	if (my_file == -1)
		return (0);

	buffer = malloc(letters * sizeof(char));
	if (!buffer)
		return (0);


	num_to_print = read(my_file, buffer, letters);

	written_num = write(STDOUT_FILENO, buffer, num_to_print);

	if (written_num < 0)
		return (0);

	free(buffer);
	close(my_file);
	return (num_to_print);
}
