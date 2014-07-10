#include <stdio.h>

#define ASCII 127

main()
{
	char c;
	int  i, j, k;
	int wl[ASCII];
	int longest, most;

	for (i = 0; i <= ASCII; ++i)
		wl[i] = 0;

	while ((c = getchar()) != EOF)
		++wl[c];

	longest = 0;
	most = 0;

	for (i = 32; i <= ASCII; ++i) {
		if (wl[i] && i > longest)
			longest = i;
		if (wl[i] > most)
			most = wl[i];
	}	
	for (k = most; k > 0; --k) {
		printf("%3d: ", k);
			for (i = 32; i < longest; ++i) {
				if (wl[i] < k)
					printf(" ");
			else
				printf("x");
			}
		putchar('\n');
		}
 
		printf("     ");
	for(i = 32;i < 127; i++)
		printf("=");
		printf("\n");
		printf("     ");
    	for(i = 32; i < 127; i++)
		putchar(i);
    		putchar('\n');

}
		
