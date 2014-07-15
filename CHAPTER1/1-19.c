#include <stdio.h>

#define MAXLINE 10000

int getline2(char line[], int maxline);
void reverse(char s[]);

main()
{
	char line[MAXLINE];

	while (getline2(line, MAXLINE) > 0) {
		reverse(line);
			printf("%s", line);
	}

}

int getline2(char s[], int lim)
{
	int c, i, j;
	
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

void reverse(char s[])
{
	int i, j;
	char tmp;

	i = 0;
	while (s[i] != '\0')
		++i;
	--i;

	while (s[i] == '\n')
		--i;

	j = 0;
	while (j < i ) {
		tmp = s[j];
		s[j] = s[i];
		s[i] = tmp;
		--i;
		++j;
	}
}
