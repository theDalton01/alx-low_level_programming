#include <stdio.h>
/**
 * main - Entry point
 * To print the alphabets in reverse
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char letter;

	for (letter = 'z'; letter >= 'a'; letter--)
		putchar(letter);

	putchar('\n');
	return (0);
}

