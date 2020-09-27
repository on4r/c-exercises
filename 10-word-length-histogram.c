#include <stdio.h>

#define IN	1
#define OUT	0

int main()
{
	int c, i, j, counter, longest, lwords[50], state;

	for (i = 1; i <= 50; i++)
		lwords[i] = 0;

	state = counter = longest = 0;

	while ((c = getchar()) != EOF) {
		if (c == ' ' || c == '\t' || c == '\n' || c == '.') {
			// end of word?
			if (state == IN) {
				// new longest word?
				if (longest < counter)
					longest = counter;

				++lwords[counter];
				counter = 0;
			}
			state = OUT;
		}
		else if (state == OUT)
			state = IN;
		if (state == IN)
			counter++;
	}

	// print the histogram
	for (i = 1; i <= 50; i++) {
		printf("%2d: ", i);
		if (lwords[i] > 0)
			for (j = 0; j < lwords[i]; j++)
				printf("=");
		printf("\n");

		// skip if there are no longer words in the array
		if (i >= longest)
			break;
	}
}
