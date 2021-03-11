#include <stdio.h>

#define MAXLINE 1000
#define MINLINE 80

int getmyline(char line[], int maxline);

int main()
{
	int len;
	int max;
	char line[MAXLINE];

	max = 0;
	while ((len = getmyline(line, MAXLINE)) > 0)
		if (len > MINLINE) {
			printf("%s", line);
		}

	return 0;
}

int getmyline(char s[], int lim)
{
	int c, i;

	for (i = 0; i < lim - 1 && (c = getchar()) != EOF && c != '\n'; ++i)
		s[i] = c;
	if (c == '\n') {
		s[i] = c;
		++i;
	}
	s[i] = '\0';
	return i;
}

