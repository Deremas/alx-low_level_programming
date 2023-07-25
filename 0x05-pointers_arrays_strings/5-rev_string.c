#include "main.h"

/**
 * rev_string - function that reverses a string
 * @s: string to reverses
 * Return: string in reverse
*/

void rev_string(char *s)

{
	char rev = s[0];
	int counter = 0;
	int w;

	while (s[counter] != '\0')
		counter++;
	for (w = 0; w < counter; w++)
	{
		counter--;
		rev = s[w];
		s[w] = s[counter];
		s[counter] = rev;
	}
}
