#include <stdio.h>

int main()
{
	int c, lc;

	lc = 0;
	while ((c = getchar()) != EOF)
		if (c == '\n') // character constant '\n' == '10'
			lc++;
	printf("%d\n", lc);
}
