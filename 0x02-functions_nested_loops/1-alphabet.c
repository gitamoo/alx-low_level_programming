#include "main.h"

/*
 * main - print the alphabets in lowercase
 * Return - 0 and exit
 */
int main(void)
{
	print_alphabet();
	return (0);
}
void print_alphabet(void)
{
	char alphabets = 'a';

	while (alphabets <= 'z';
	{
		_putchar(alphabets);
		alphabets++;
	}

	_putchar('\n');
}
