#include "main.h"

/*
 * main - print the alphabets in lowercase
 * Return - 0 and exit
 */
int main(void)
{
	char alphabets;
	for (alphabets = 'a'; alphabets <= 'z'; alphabets++)
		_putchar(alphabets);

	_putchar('\n');
	return 0;
}
