#include "main.h"
/**
 * rot13 - function that encodes a string
 * @s: pointer that encodes
 * Return: *s
 */

char *rot13(char *s)

{
	int a, b;

	char data[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char datarot[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	for (a = 0; s[a] != '\0'; a++)
	{
		for (b = 0; b < 52; b++)
		{
			if (s[a] == data[b])
			{
				s[a] = datarot[b];
					break;
			}
		}
	}
	return (s);
}
