#include <stdio.h>

int main()
{
	int c, tc, bc, lc;

	tc = bc = lc = 0;

	while ((c = getchar()) != EOF) {
		switch (c)
		{
			case '\t':
				tc++;
				break;
			case ' ':
				bc++;
				break;
			case '\n':
				lc++;
				break;
		}
	}
	printf("tabs: %d\nblanks: %d\nlines: %d\n", tc, bc, lc);
}
