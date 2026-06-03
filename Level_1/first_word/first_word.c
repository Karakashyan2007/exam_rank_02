#include <unistd.h>

int	main(int argc, char **argv)
{
	int	i;
	int	j;
	char	a;
	int	flag;

	flag = 0;
	i = 1;
	j = 0;
	if (argc != 2 || !argc)
	{
		write(1, "\n", 1);
		return (0);
	}
	while (argv[i][j] == ' ')
	{
		j++;
	}	
	while (argv[i][j] != ' ' && argv[i][j] != '\0')
	{
		a = argv[i][j];
		write(1, &a, 1);
		j++;
	}
	write (1, "\n", 1);
	return (0);
}
