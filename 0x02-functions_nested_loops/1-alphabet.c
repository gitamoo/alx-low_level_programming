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
	char alphabets;
	for (alphabets = 'a'; alphabets <= 'z'; alphabets++)
		_putchar(alphabets);

	_putchar('\n');
	return 0;
}
