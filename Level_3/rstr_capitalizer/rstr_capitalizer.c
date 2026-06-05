#include <unistd.h>



int	is_space(char c)
{
	return(c == ' ' || c == '\t');
}

void	print_lower(char c)
{
	if(c >= 'A' && c <= 'Z')
		c +=32;
	write(1, &c, 1);
}

void	print_upper(char c)
{
	if(c >= 'a' && c <= 'z')
		c -=32;
	write(1, &c, 1);
}

void	rstr_capitalizer(char *str)
{
	int	i;

	i = 0;
	while(str[i] != '\0')
	{
		if (str[i + 1] == '\0' || is_space(str[i + 1]))
		{
			print_upper(str[i]);
		}
		else
			print_lower(str[i]);
		i++;
	}
}
int	main(int argc, char **argv)
{
	int	i;

	if (argc > 1)
	{
		i = 1;
		while (argc > i)
		{
			rstr_capitalizer(argv[i]);
			write(1, "\n", 1);
			i++;
		}
	}
	else
		write(1, "\n", 1);
	return(0);
}