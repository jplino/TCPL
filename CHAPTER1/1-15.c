#include <stdio.h>

float celcius(int f);

main()
{
	int i;	

	for (i = 0; i <= 300; i = i + 20)
		printf("%d\t%6.1f\n", i, celcius(i));

	return 0;
}

float celcius(int fahr)

{

	return (5.0/9.0) * (fahr-32);
<<<<<<< HEAD

=======
>>>>>>> 1a0dda0942f6201e7e4814974172204310c2baaf

}
	
