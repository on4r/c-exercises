#include <stdio.h>
#include "mygetline.h"

#define MAXSIZE	65536

void reverse(char line[], int line_length);

int main()
{
	int len;
	char line[MAXSIZE];

	while ((len = mygetline(line)) > 0) {
		reverse(line, len);
		printf("%s", line);
	}
}

void reverse(char line[], int ll)
{
	int i, c;
	ll -= 2; // dont swap '\n' and '\0'
	for (i = 0;	i <= ll / 2; i++) {
		c = line[i];
		line[i] = line[ll - i];
		line[ll - i] = c;
	}
}
