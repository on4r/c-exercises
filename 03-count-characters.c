#include <stdio.h>

/*
 * prints the number of characters from an input stream
 * including the final null character
 */

int main()
{
	long nc;

	for (nc = 0; getchar() != EOF; nc++)
		; // null statement
	printf("%ld\n", nc);
}
