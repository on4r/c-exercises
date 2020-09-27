#include <stdio.h>
#include <stdbool.h>

int main()
{
	int c, c_last;
	bool in_comment, in_line_comment, in_block_comment,
		 in_quote, in_double_quote, in_single_quote;

	in_comment = in_line_comment = in_block_comment = false;
	in_quote = in_double_quote = in_single_quote = false;

	while ((c = getchar()) != EOF) {
		if (!in_quote) {
			switch (c) {
			case '/':
				if (in_comment)
					in_line_comment = true;
				else
					in_comment = true;
				break;
			case '*':
				if (in_comment)
					in_block_comment = true;
			}

			if (in_comment) {
				if (in_line_comment) {
					if (c == '\n') {
						in_comment = in_line_comment = false;
						putchar(c);
					}
				} else if (in_block_comment) {
					if (c == '/' && c_last == '*') {
						in_comment = in_block_comment = false;
					}
				}
				c_last = c;
				continue;
			}
		}

		if (!in_comment) {
			switch (c) {
			case '"':
				if (!in_single_quote)
					in_double_quote = (in_double_quote && c_last != '\\') ? false : true;
				break;
			case '\'':
				if (!in_double_quote)
					in_single_quote = (in_single_quote && c_last != '\\') ? false : true;
			}
			in_quote = (in_double_quote || in_single_quote) ? true : false;
			putchar(c);
			c_last = c;
		}
	}
}
