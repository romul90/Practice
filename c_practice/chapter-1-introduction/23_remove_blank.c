#include <stdio.h>

#define MAXLINE 1000

int getmyline(char line[], int maxline);

int main()
{
	int len;
	int max;
	char line[MAXLINE];

	max = 0;
	while ((len = getmyline(line, MAXLINE)) > 0)
		if (len > 0) {
			printf("%s", line);
		}

	return 0;
}

int getmyline(char s[], int lim)
{
	int c, i, pre;

	pre = '\n';

	i = 0;

	while (i < lim - 1 && (c = getchar()) != EOF && c != '\n')
	{
		if (c == '\t')
			c = ' ';

		if (!(c == ' ' && pre == ' '))
		{
			s[i] = c;
			++i;
		}
		pre = c;
	}
		


	if (c == '\n') {
		s[i] = c;
		++i;
	}
	s[i] = '\0';
	return i;
}

