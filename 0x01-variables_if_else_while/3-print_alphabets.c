#include <stdio.h>
/**
 * main - Entry point
 * To print the alphabets in lower case and then upper case
 *
 * Return: Always 0 (Success)
 */
int manin(void)
{
	char c = 'a';
		
		while (c <= 'z')
	{
		putchar(c);
		c++;
	}

		c = 'A';
		while (c <= 'Z')
		{
			putchar(c);
			c++;
		}

		putchar('\n')
			return (0);
}
