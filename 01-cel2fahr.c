#include <stdio.h>

int main()
{
	// declarations
	float cels, fahr;
	int start, end, step;

	// assignment statements
	start = -50;
	end = 50;
	step = 10;

	printf("celsius to fahrenheit\n---\n");

	cels = start;
	while (cels <= end) {
		fahr = ((cels * 9.0) / 5.0) + 32;
		printf("%3.0f %5.1f\n", cels, fahr);
		cels += step;
	}

	/*
	 * With for loop:
	 *
	for (cels = start; cels >= end; cels -= step)
		printf("%3.0f %5.1f\n", cels, ((cels * 9.0) / 5.0) + 32 );
	*/
}
