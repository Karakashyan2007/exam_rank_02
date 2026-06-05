#include <unistd.h>

int	is_space(char c)
{
	return(c == ' ' || (c >= 9 && c <= 13));
}

int	main(int argc, char **argv)
{
	int	i;

	if (argc > 1)
	{
		i = 0;
		while (argv[1][i] && is_space(argv[1][i]))
			i++;
		while (argv[1][i] && !is_space(argv[1][i]))
			i++;
		while (argv[1][i] && is_space(argv[1][i]))
			i++;
		while (argv[1][i])
		{
			while (argv[1][i] && !is_space(argv[1][i]))
			{
				write(1, &argv[1][i], 1);
				i++;
			}
			while(is_space(argv[1][i]))
					i++;
			if (argv[1][i] == '\0' || !is_space(argv[1][i]))
				write(1, "p", 1);
		}
		i = 0;
		while (argv[1][i] && is_space(argv[1][i]))
			i++;
		while (argv[1][i] && !is_space(argv[1][i]))
		{
			write(1, &argv[1][i], 1);
			i++;
		}
	}
	
	return(0);
}