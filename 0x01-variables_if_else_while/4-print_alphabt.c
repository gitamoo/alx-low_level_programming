#include <stdio.h>

/**
 * main - print alphabets in lower case
 * Return: 0 and exit
 */
int main(void)
{
	char alphabet;
	for (alphabet = 'a'; alphabet <= 'z'; alphabet++)
	{
		if (alphabet != 'e' && alphabet != 'q')
			putchar(alphabet);
	}


	putchar('\n');

	return (0);
}
