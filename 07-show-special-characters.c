#include <stdio.h>

int main()
{
	int c;

	while ((c = getchar()) != EOF)
	{
		switch (c)
		{
			case '\t':
				putchar('\\');
				putchar('t');
				break;
			case '\n':
				putchar('\\');
				putchar('n');
				putchar(c);
				break;
			case ' ':
				putchar('_');
				break;
			default:
				putchar(c);
		}
	}
}
