#include <stdio.h>

#define MAXLINE 10000

int getline2(char line[], int maxline);
int remover(char s[]);

main()
{
	int c;
	char line[MAXLINE];
	
	while((getline2(line, MAXLINE)) > 0)
		if (remover(line) > 0)
			printf("%s", line);
	return 0;
}

int getline2(char s[], int lim)
{
	int i, j;
	char c;

	j = 0;
		for (i = 0; (c = getchar()) != EOF && c != '\n'; ++i)	
			if (i < lim-2) {
				s[j] = c;
				++j;
			}
			if (c == '\n') {
				s[j] = c;
				++j;
				++i;
			}
		s[j] = '\0';
	return i;
}

int remover(char s[])
{
	int i;
	
	i = 0;
	while (s[i] != '\n')
		++i;
	--i;
	while (s[i] >= 0 && (s[i] == ' ' || s[i] == '\t'))
		--i;
	if (i >= 0) {
		++i;
		s[i] = '\n';
		++i;
		s[i] = '\0';
	}
	return i;
}
