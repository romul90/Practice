#include <stdio.h>

main()
{
	int c, i, j;
	int len_now, max;
	int lenword[10];

	i = j = 0;
	max = 0;

	for (i = 0; i < 10; ++i)
		lenword[i] = 0;
	len_now = 0;

	while ((c = getchar()) != EOF)
	{
		if (c == ' ' || c == '\n' || c == '\t')
		{
			if (len_now > max)
				max = len_now;
			if (len_now > 0 && len_now < 10)
				++lenword[len_now-1];
			else if (len_now >= 10)
				++lenword[9];
			len_now = 0;
		}
		else
		{
			++len_now;

		}
	}

	max = max % 10;

	for (i = max; i > 0; --i)
	{
		printf("              ");
		for (j = 0; j < 10; ++j)
			if (lenword[j] >= i)
				printf(" #");
			else
				printf("  ");
		printf("\n");
	}
			

	printf("counts =      ");
	for (i = 0; i < 10; ++i)
		printf(" %d", lenword[i]);
	printf("\nlen of word:  ");
	for (i = 0; i < 9; ++i)
		printf(" %d", i+1);
	printf(" >\n");

}


