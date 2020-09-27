#include <stdio.h>

int main()
{
	printf("hello, world\a"); // alert (BEL)
	printf("hello, world\b"); // backspace
	printf("hello, world\e"); // escape character
	printf("hello, world\f"); // form feed (FF) [new page]
	printf("hello, world\r"); // carriage return (CR)
	printf("hello, world\t"); // horizontal tab
	printf("hello, world\v"); // vertical tab
	printf("hello, world\u00CC"); // universal character
	printf("hello, world\x0"); // character with hex value
}
