#include <stdio.h>

// Exercise 1-20 replace tabs in proper number of blanks
#define MAXLINE 1000
#define TABTOBLANK 10 // replace tab to TABTOBLANK blank chars

int getmyline(char line[], int maxline);
void detabline(char to[], char from[], int numblank);

int main()
{
	int len;
	char line[MAXLINE];
	char tabless[MAXLINE];

	while ((len = getmyline(line, MAXLINE)) > 0)
		if (len > 0) 
		{
			detabline(tabless, line, TABTOBLANK);
			printf("%s", tabless);
		}
	return 0;
}

int getmyline(char line[], int maxline)
{
	int c, i;

	for (i = 0; i < maxline - 1 && (c = getchar()) != EOF && c != '\n'; ++i)
		line[i] = c;
	if (c == '\n')
	{
		line[i] = c;
		++i;
	}
	line[i] = '\0';
	return i;
}

void detabline(char to[], char from[], int numblank)
{
	int i;
	int j;
	i = 0;
	j = 0;
	while (from[i] != '\0')
	{
		if (from[i] == '\t')
		{
			int k;
			for (k = 0; k < numblank; ++k)
				to[j+k] = ' ';
			j = j + k;
			++i;
		}
		else
		{
			to[j] = from[i];
			++i;
			++j;
		}
	}
}
		
