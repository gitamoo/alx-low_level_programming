#include <stdio.h>

/**
 * main - prints all the numbers of base 16 in lowercase
 * Return: o and exit
 */
int main(void)
{
	int i;
	char letter;

	for (i = 0; i <= 9; i++)
		putchar(i);

	for (letter = 'a'; letter <= 'f'; letter++)
		putchar(letter);

	putchar('\n');
	return (0);
}
