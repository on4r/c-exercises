#include <stdio.h>

#define START 300
#define END   0
#define	STEP  10

int toFahr(int);

int main()
{
	// declaration
	int cels;

	printf("celsius to fahrenheit (with function)\n---\n");

	for (cels = START; cels >= END; cels -= STEP)
		printf("%3d %5d\n", cels, toFahr(cels));

}

int toFahr(int c)
{
	return ((c * 9) / 5) + 32;
}
