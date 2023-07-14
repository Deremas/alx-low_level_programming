#include <stdio>
/*
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	printf("size of a char: %1u byte(s)\n", sizeof(char));
	printf("size of a int: %1u byte(s)\n", sizeof(int));
	printf("size of a long int: %1u byte(s)\n", sizeof(long int));
	printf("size of a long long int: %1u byte(s)\n", sizeof(long long int));
	printf("size of a float: %1u byte(s)\n", sizeof(float));
	return(0);
}
