#include "main.h"

/**
 * main - function prints _putchar, followed by a new line.
 * 
 * return 0 (success)
 */
int main(void)
{
	int i;
	char p[] = "_putchar";

	for (i = 0; i < 8; i++)
		{
		_putchar(p[i]);
		}
		_putchar('\n');
	return (0);
}
