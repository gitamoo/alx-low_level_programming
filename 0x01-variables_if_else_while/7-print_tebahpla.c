#include <stdio.h>

/**
 * main - print alphabets in reverse
 * Return: o and exit
 */
int main(void)
{
	char alphabet;

	for (alphabet = 'z'; alphabet >= 'a'; alphabet++)
		putchar(alphabet);
	putchar('\n');
	return (0);
}
