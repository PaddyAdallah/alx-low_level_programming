#include "main.h"

/**
 *main function prints _putchar, followed by a new line. The program should return 0
 *
 * return 0
 */
int main(void)
{
	int i;
	char p[] = "_putchar";

	for (i = 0; i < 9; i++)
		{
		_putchar(p[i]);
		}
		_putchar('\n');
	return (0);
}
