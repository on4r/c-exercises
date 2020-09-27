#include <stdio.h>
#include <stdlib.h>

#define MAXSIZE 9999

int mygetline(char array[]);

int main(int argc, char *argv[])
{
	int length, min;
	char line[MAXSIZE];

	if ( argc != 2 || (min = atoi(argv[1])) <= 0 ) {
		printf("Takes exactly one argument (int). Please try again.\n");
		exit(1);
	}

	while ((length = mygetline(line)) > 0)
		if (length > min)
			printf("(%i) %s", length, line);
}

int mygetline(char array[])
{
	int c, i;

	i = 0;

	while ((c = getchar()) != EOF && c != '\n') {
		array[i] = c;
		i++;
	}

	if (c == '\n') {
		array[i] = c;
		i++;
	}

	array[i] = '\0';

	return i;
}
