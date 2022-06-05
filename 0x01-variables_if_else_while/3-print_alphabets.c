#include <stdio.h>
/**
 * main - Entry point
 * To print alphabet in lowercase and uppercase
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char c = 'a';

		for (c = 'a'; c <= 'z')
			putchar(c);
		c++;

		c = 'A';

		for (c = 'A'; c <= 'Z')
			putchar(c);
		c++;

		putchar('\n');
		return (0);
}
