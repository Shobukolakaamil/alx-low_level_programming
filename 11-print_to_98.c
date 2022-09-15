#include <stdio.h>

/**
 *print_to_98 - prints all natural numbers from input to 98.
 *in ascending order seperated by a comma followed by a space.
 *@n: The number to begin counting from
 */
void print_to_98

{
	if (n >= 98)
	{
		while (n > 98)
			printf("%d, ", n--);
		printf("%d\n", n);
	}
	else
	{
		while (n < 98)
			printf("%d, ", n++);
		printf("%d\n", n);
	}
}
