#include <stdio.h>

#define MAXLINE 1000

int getline2(char line[], int maxline);

main()
{	
	int i;
	int len;
	char line[MAXLINE];
	
	i = 80;
	while ((len = getline2(line , MAXLINE)) > 0)
		if (i > len)
		printf("Please... 80 characters!\n");
		else
		printf("Longer than 80 characters :\n%s\n", line);
	return 0;
}


int getline2(char s[], int lim)
{
	int c, i;
	
	for (i = 0; i < lim-1 && (c = getchar()) != EOF && c != '\n'; ++i)
		s[i] = c;
	if (c == '\n') {
		s[i] = c;
		++i;	
	}
	s[i] = '\0';
	return i;
}		
