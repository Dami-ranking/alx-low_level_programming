#include "main.h"

/**
 * _strlen - finds the length of a string
 * @s: string to be counted
 * Return: lenghth of the string
 */

int _strlen(char *s)
{
	int i;
	int uche = 0;

	for (i = 0 ; s[i] != '\0' ; i++)
		uche++;
	return (uche);
}
