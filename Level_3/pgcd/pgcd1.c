#include <stdlib.h>
#include <stdio.h>

int	main(int argc, char **argv)
{
	int	a;
	int	b;
	int	tmp;

	if (argc == 3)
	{
		a = atoi(argv[1]);
		b = atoi(argv[2]);
		tmp = 0;
		if(a > 0 || b > 0)
		{
			while(b != 0)
			{
				tmp = b;
				b = a % b;
				a = tmp;				
			}
			printf("%d", a);
		}

	}
	printf("\n");
	return(0);
}