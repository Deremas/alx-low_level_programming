#include <stdio>
/**
 * main - A program thst prints the size of various computer types
 *
 * Return: Always 0 (Success)
 */
int main(void)

{
	printf("size of a char: %l byte(s)\n", sizeof(char));
	printf("size of an int: %l byte(s)\n", sizeof(int));
	printf("size of a long int: %l byte(s)\n", sizeof(long int));
	printf("size of a long long int: %l byte(s)\n", sizeof(long long int));
	printf("size of a float: %l byte(s), sizeof(float));
	return (0);
}
