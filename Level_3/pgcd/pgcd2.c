#include <stdlib.h>
#include <stdio.h>

int	main(int argc, char **argv)
{
	int	n1;
	int	n2;
	int	tmp;

	if (argc == 3)
	{
		n1 = atoi(argv[1]);
		n2 = atoi(argv[2]);
		tmp = 0;
		while (n2 != 0)
		{
			tmp = n2;
			n2 = n1 % n2;
			n1 = tmp;
		}
		printf("%d", n1);
	}
	printf("\n");
	return(0);
}