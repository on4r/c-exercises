#include <stdio.h>
#include "mygetline.h"

void removeTrailingWhitespace(char[], int);

int main()
{
	int len;
	char line[65000];

	while ((len = mygetline(line)) > 0) {
		if (len == 1 && line[0] == '\n')
			continue;
		removeTrailingWhitespace(line, len);
		printf("%s",line);
	}
}

void removeTrailingWhitespace(char array[], int i)
{
	/*
	 * -1 because arrays start at 0
	 * -1 because last char is the null character
	 */
	for (i -= 2; (array[i] == '\t') || (array[i] == ' '); i--)
		array[i] = '\n';
	array[i+2] = '\0';
}
