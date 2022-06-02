#include <stdio.h>


/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	double type_of_double;
	int type_of_int;
	char type_of_char;
	float type_of_float;

	/*Size of data types */
	printf("Size of a char: %zu byte (s)\n", sizeof(charType));
   	printf("Size of an int: %zu byte (s)\n", sizeof(intType));
    	printf("Size of a long: %zu byte (s)\n", sizeof(longType));
    	printf("Size of a long int: %zu byte (s)\n", sizeof(longintType));
	printf("Size of a float: %zu byte (s)\n", sizeof(floatType));
	return (0);
}
