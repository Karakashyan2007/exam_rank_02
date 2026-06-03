#include <unistd.h>

int	main(int argc, char **argv)
{
	int	i;
	int	j;
	unsigned char seen[256] = {0};

	i = 0;
	j = 0;
	if(argc == 3)
	{
		while(argv[1][i])
		{
			j = 0;
			while(argv[2][j])
			{
				if(argv[1][i] == argv[2][j] && seen[argv[1][i]] == 0)
				{
					write(1, &argv[1][i], 1);
					seen[argv[1][i]] = 1;
					break;
				}
				j++;
			}
			i++;
		}
	}
	write(1, "\n", 1);
	return(0);
}
