#include <stdio.h>

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

