#include <stdio.h>
int sizeof_operator_example()
{
	int intType;
	float floatType;
	double doubleType;
	char charType;

	// sizeof evaluates the size of a variable
	printf("Size of int: %ld bytes\n", sizeof(intType));
	printf("Size of float: %ld bytes\n", sizeof(floatType));
	printf("Size of double: %ld bytes\n", sizeof(doubleType));
	printf("Size of char: %ld bytes\n", sizeof(charType));

	return 0;
}