#include <stdio.h>
#include <stdlib.h>

#define DEFAULT	4

int main(int argc, char *argv[])
{
	int i, c, cc, tabstop;

	if (argc == 2 && atoi(argv[1]))
		tabstop = atoi(argv[1]);
	else
		tabstop = DEFAULT;

	// character counter
	cc = 1;
	while ((c = getchar()) != EOF) {
		if (c == '\t') {
			for (i = 0; i <= tabstop - cc; i++)
				putchar(' ');
			cc = 1;
		} else {
			if (c == '\n' || cc == tabstop)
				cc = 1;
			else
				cc++;
			putchar(c);
		}
	}
}
