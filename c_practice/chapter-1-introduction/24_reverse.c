#include <stdio.h>

#define MAXLINE 1000

int getmyline(char line[], int maxline);
void removetabs(char to[], char from[]);
void reverse(char s[]);

int main()
{
	int len;
	int max;
	char line[MAXLINE];
	char tabless[MAXLINE];

	max = 0;
	while ((len = getmyline(line, MAXLINE)) > 0)
		if (len > 0) {
			removetabs(tabless, line);
			printf("%s", tabless);
			reverse(tabless);
			printf("%s", tabless);
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

void removetabs(char to[], char from[])
{
	int i, j;
	int pre;

	pre = '\n';

	i = 0;
	j = 0;
	while (from[i] != '\0')
	{
		if (from[i] == '\t')
			from[i] = ' ';
		if (!(from[i] == ' ' && pre == ' '))
		{
			to[j] = from[i];
			++j;
		}
		pre = from[i];

		++i;
	}
	to[i] = '\0';
}
void reverse(char s[])
{
	int i, j;
	i = 0;
	while (s[i] != '\n')
		++i;

	j = 0;
	while (j < (i / 2))
	{
		char temp = s[i-j-1];
		s[i-1-j] = s[j];
		s[j] = temp;
		++j;
	}

}
		
