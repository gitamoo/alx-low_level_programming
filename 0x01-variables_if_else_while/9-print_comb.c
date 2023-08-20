#include <stdio.h>

/**
 * main - print all singlr digits
 * Return: 0 and exit
 */
int main(void)
{
	int i;

	for (i = 0; n <= 9; i++)
	{
		putchar(i);
		if (i != '9')
		{		
			putchar(',');
			putchar(' ');
		}	
	}
	putchar('\n');
	return (0);
}
