#include <stdio.h>

float power(int base, int n);

int main()
{
	int i;

	for (i = 8; i <= 64; i += 8)
		printf("2 ^%3d (%d Byte) = %.f\n", i, i / 8, power(2,i)); // arguments: (2, i)
}

float power(int base, int n) // parameters: (base, n)
{
	float r;

	for (r = 1; n > 0; n--)
		r *= base;

	return r;
}
