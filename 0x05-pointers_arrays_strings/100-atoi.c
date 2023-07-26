#include "main.h"

/**
 * _atoi - function that convert a string to an integer
 * @s: string that to be converted to integer
 * Return: string if number is available otherwise 0
*/

int _atoi(char *s)

{
	int a = 0;
	int b = 0;
	int c = 0;
	int d = 0;

	while (s[a])
	{
		if (s[a] == 45)
		{
			c *= -1;
		}
		while (s[a] >= 48 && s[a] <= 57)
		{
			d = 1;
			b = (b * 10) + (s[a] - '0');
			a++;
		}
		if (d == 1)
		{
			break;
		}
		a++;
	}
	b *= c;
	return (b);
}

