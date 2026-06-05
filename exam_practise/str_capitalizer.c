#include <unistd.h>

int	is_space(char c)
{
	return(c == ' ' || (c >= 9 && c <= 13));
}

void	print_lower(char c)
{
	if (c >= 'A' && c <= 'Z')
	{
		c+=32;
	}
	write(1, &c, 1);
}

void	print_upper(char c)
{
	if (c >= 'a' && c <= 'z')
	{
		c-=32;
	}
	write(1, &c, 1);
}

void	str_capitalizer(char *str)
{
	int	i;

	i = 0;
	while(str[i])
	{
		while (is_space(str[i]))
			i++;
		if (str[i] && !is_space(str[i]))
		{
			print_upper(str[i]);
			i++;
		}
		while (str[i] && !is_space(str[i]))
		{
			print_lower(str[i]);
			i++;
		}
		if (str[i] && is_space(str[i]))
		{
			while (is_space(str[i]))
				i++;
			if(str[i] != '\0' && !is_space(str[i]))
				write(1, " ", 1);
		}
	}

}

int	main(int argc, char **argv)
{
	int	i;

	i = 1;
	if (argc > 1)
	{
		while(i < argc)
		{
			str_capitalizer(argv[i]);
			write(1, "\n", 1);
			i++;
		}
	}
	else
		write(1, "\n", 1);
	return(0);
}