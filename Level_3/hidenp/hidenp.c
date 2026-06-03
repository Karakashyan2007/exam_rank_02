#include <unistd.h>

int	main(int argc, char **argv)
{
	char	*s1;
	char	*s2;
	int		i;

	if (argc == 3)
	{
		s1 = argv[1];
		s2 = argv[2];
		i = 0;
		while (s2[i])
		{
			if(s2[i] == *s1)
				s1++;
			i++;
		}
		if (*s1 == '\0')
			write(1, "1", 1);
		else
			write(1, "0", 1);
	}
	write(1, "\n", 1);
	return(0);
}