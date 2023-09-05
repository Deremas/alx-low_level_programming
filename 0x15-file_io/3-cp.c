#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>

/**
 * main - a program that copies the content of a file to another file
 * @argc: counts the number of arguments
 * @argv: argument vector
 *
 * Return: if the number of argument is not the correct one, exit with code 97
 * and print Usage: cp file_from file_to followed by a new line,
 * on the POSIX standard error
 * if file_to already exists, truncate it
 * if file_from does not exist, or if you can not read it, exit with code 98
 * and print Error: Can't read from file NAME_OF_THE_FILE, followed by a new line,
 * on the POSIX standard error
 * where NAME_OF_THE_FILE is the first argument passed to your program
 * if you can not create or if write to file_to fails, exit with code 99
 * and print Error: Can't write to NAME_OF_THE_FILE, followed by a new line,
 * on the POSIX standard error
 * where NAME_OF_THE_FILE is the second argument passed to your program
 * if you can not close a file descriptor , exit with code 100
 * and print Error: Can't close fd FD_VALUE, followed by a new line,
 * on the POSIX standard error
 */

int main(int argc, char **argv)
{
	int my_file_from, my_file_to, from_copy, to_copy, c1, c2;
	char buffer[1024];

	if (argc != 3)
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n"), exit(97);

	my_file_from = open(argv[1], O_RDONLY);
	if (my_file_from == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	my_file_to = open(argv[2], O_CREAT | O_WRONLY | O_APPEND | O_TRUNC, 0664);
	if (my_file_to == -1)
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]), exit(99);
	
	while ((from_copy = read(my_file_from, buffer, 1024)) > 0)
	{
		to_copy = write(my_file_to, buffer, from_copy);
		if (from_copy != to_copy)
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]), exit(99);
	}
	if (from_copy == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}

	c1 = close(my_file_from);
	if (c1 == -1)
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", my_file_from), exit(100);
	c2 = close(my_file_to);
	if (c2 == -1)
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", my_file_to), exit(100);
	return (0);
}
