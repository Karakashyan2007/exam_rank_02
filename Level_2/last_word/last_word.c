#include <unistd.h>

int	is_space(char c)
{
	return((c = ' ' || (c >= 9 && c <= 13)));
}

int	main(int argc, char **argv)
{
	int	i;
	
	i = 0;
	if(argc == 2)
	{
		while(argv[1][i])
			i++;
		i--;
		while(i >= 0 && is_space(argv[1][i]))
			i--;
		while(i >= 0 &&!is_space(argv[1][i]))
			i--;
		i++;
		while(argv[1][i] && !is_space(argv[1][i]))
		{
			write(1, &argv[1][i], 1);
			i++;
		}
	}
	write(1, "\n", 1);
	return(0);
}
