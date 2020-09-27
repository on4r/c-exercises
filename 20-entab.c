#include <stdio.h>
#include <stdlib.h>

#define TABSTOP	4

int main(int argc, char *argv[])
{
	int i, c, blanks, tabstop = TABSTOP;

	// get tabstop length from arguments
	if (argc == 2 && atoi(argv[1]))
		tabstop = atoi(argv[1]);

	blanks = 0;
	i = 1;
	while ((c = getchar()) != EOF) {
		// we found a blank ...
		if (c == ' ') {
			// ... so lets increment the blank counter
			blanks++;
			// ah! and there were only blanks before
			if (blanks == tabstop) {
				// so we should put a tab here
				putchar('\t');
				// lets reset blanks so we can start
				// counting for the next tabstop
				blanks = 0;
			}
		}
		// we found any other character
		else {
			// where there any blanks before?
			// then we should print them now!
			for (; blanks > 0; blanks--)
				putchar(' ');
			// blanks is now zero!
			// we print the found character!
			putchar(c);
			// new line? new luck!
			// reset the loop iterator
			if (c == '\n')
				i = 0;
		}

		// we use i to count to the next tabstop
		// so we have to reset it after one
		if ((i % tabstop) == 0)
			i = 0;

		i++;
	}
}
