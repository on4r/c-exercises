#include <stdio.h>

#define LIMIT 20

int main()
{
	int c, i, j, max, fchars[255];

	max = 0;

	for (i = 0; i <= 255; i++)
		fchars[i] = 0;

	while ((c = getchar()) != EOF) {
		++fchars[c];
		if (max < fchars[c])
			max = fchars[c];
	}

	// print the histogram
	printf("ASCII printable characters\n");
	for (i = 32; i <= 127; i++) {
		printf("%c ", i);
	}
	printf("\n");

	for (i = 1; i <= max && i <= LIMIT; i++) {
		for (j = 32; j <= 127; j++)
			if (fchars[j] >= i)
				printf("# ");
			else
				printf("  ");
		printf("\n");
	}
}
