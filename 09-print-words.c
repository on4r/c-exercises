#include <stdio.h>

#define IN 	1
#define OUT 0

int main()
{
	int c, nw, state;

	nw = 0;
	state = OUT;

	while ((c = getchar()) != EOF)
	{
		if (c == ' ' || c == '\n' || c == '\t' || c == '.') {
			if (state == IN)
				putchar('\n');
			state = OUT;
		}
		else if (state == OUT) {
			state = IN;
			nw++;
		}

		if (state == IN)
			putchar(c);
	}
}
