#include <stdio.h>
#include <stdlib.h>

#define	COLSTOP 20
#define	BUFSIZE 1024

int writeLine(char buffer[], int colstop, int *offset)
{
	int c, i, bi;

	i = 0;
	bi = -1;
	colstop -= *offset;
	while ((c = getchar()) != '\n' && i < colstop && c != EOF) {
		buffer[i] = c;
		if (c == ' ')
			bi = i;
		i++;
	}

	if (c == '\n') {
		buffer[i] = c;
		*offset = 0;
		return i + 1;
	}

	if (i == colstop) {
		if (bi == -1) {
			buffer[i] = '\n';
			buffer[i + 1] = c;
			*offset = 1;
			return i + 2;
		} else {
			buffer[bi] = '\n';
			buffer[i] = c;
			*offset = i - bi;
			return i + 1;
		}
	}

	if (c == EOF) {
		return 0;
	}
}

int main(int argc, char *argv[])
{
	int i, length, offset = 0, colstop = COLSTOP;
	char buffer[BUFSIZE];

	if (argc == 2 && atoi(argv[1]))
		colstop = atoi(argv[1]);

	while ((length = writeLine(buffer, colstop, &offset)) != 0) {
		for (i = 0; i < length; i++)
			putchar(buffer[i]);
	}
}

