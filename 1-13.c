#include <stdio.h>

#define IN	1
#define OUT	0
#define MAXWORD	100

main()
{
	int c, i, j, k, nc, state;
	int wl[MAXWORD];
	int longest, most;

	nc = 0;
	state = OUT;
	for (i = 0; i < MAXWORD; ++i)
		wl[i] = 0;
	
	while ((c = getchar()) != EOF) {
		if (c == ' ' || c == '\n' || c == '\t') {
			state = OUT;
			if (nc > 0)
				++wl[nc];
			nc = 0;
		}
		else if (c == OUT) {
			state = IN;
			nc = 1;
		}
		else
			++nc;
	}

	longest = 0;
	most = 0;
	for (i = 1; i < MAXWORD; ++i) {
		if (wl[i] && i > longest)
			longest = i;
		if (wl[i] > most)
			most = wl[i];
	}

	printf("HISTOGRAMA HORIZONTAL: \n");
	printf("\n");
	for (i = 1; i <= longest; ++i) {
		printf("%3d: ", i);
			for (j = 1; j <= wl[i]; ++j)
				putchar('*');
				putchar('\n');
	}
	 
	printf("\n");
	printf("HISTOGRAMA VERTICAL: \n");
	for (k = most; k > 0; --k) {
		printf("%5d :  ", k);
			for (i = 1; i <= longest; ++i) {
				if (wl[i] < k) 
					printf("    ");
				else
					printf("*   ");
			}
		putchar('\n');
	}

 	printf("      ");
 	for (i = 1; i <= longest; ++i)
		printf("====");
		printf("\n      ");
	for (i = 1; i <= longest; ++i)
		printf("%4d", i);
		putchar('\n');
}
