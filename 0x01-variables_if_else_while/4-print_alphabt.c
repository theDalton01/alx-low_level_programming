#include <stdio.h>
/**
 * main - Entry point
 * To print alphabets except q and e in lower case
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char letter;

	for (letter = 'a'; letter <= 'z'; letter++)
		if (letter != 'e' && letter !='q')
			putchar(letter);

	putchar('\n');
	return (0);
}
