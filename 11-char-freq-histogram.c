#include <stdio.h>

int main()
{
	int c, i, j, fchars[255];

	for (i = 0; i <= 255; i++)
		fchars[i] = 0;

	while ((c = getchar()) != EOF)
		++fchars[c];

	// print the histogram
	printf("ASCII printable characters\n");
	for (i = 32; i <= 127; i++) {
		printf("%c: ", i);
		if (fchars[i] > 0)
			for (j = 0; j < fchars[i]; j++)
				printf("=");
		printf("\n");
	}
}
