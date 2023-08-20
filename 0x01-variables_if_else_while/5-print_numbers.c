#include <stdio.h>

/**
 * main - print all single digits starting from 0
 * Return: 0 and exit
 */
int main(void)
{
	int numbers;

	for (numbers = '0'; numbers <= 10; numbers++)
		putchar(numbers);

	putchar('\n');

	return (0);
}
