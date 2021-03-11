#include <stdio.h>

#define IN 1 // inside a word
#define OUT 0 // outside a word

main()
{
	int c, nl, nw, nc, state;

	state = OUT;
	nl = nw = nc = 0;
	while ((c = getchar()) != EOF)
	{
		++nc;
		if (c == '\n')
			++nl;
		if (c == ' ' || c == '\n' || c == '\t')
		{
			if (state == IN)
			{
				putchar('\n');
			}
			state = OUT;
		}
		else if (state == OUT)
		{
			state = IN;
			++nw;
			putchar(c);
		}
		else
			putchar(c);
	}
	printf("%d %d %d\n", nl, nw, nc);
}

