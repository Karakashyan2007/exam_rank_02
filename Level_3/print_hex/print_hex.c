#include <unistd.h>

int	ft_atoi(char *str)
{
	int	i;
	int	sign;
	int	res;
	
	res = 0;
	i = 0;
	sign = 1;
	while(str[i] == ' ' || (str[i] >= 9 && str[i] <= 13))
		i++;
	if(str[i] == '+' || str[i] == '-')
	{
		if(str[i] == '-')
			sign = -1;
		i++;
	}
	while(str[i] >= '0' && str[i] <= '9')
	{
		res = res * 10 + (str[i] - '0');
		i++;
	}
	return(res * sign);
}

void	print_hex(int	n)
{
	char	*base = "0123456789abcdef";
	
	if(n >= 16)
		print_hex(n / 16);
	write(1, &base[n % 16], 1);
}

int	main(int argc, char **argv)
{
	if(argc == 2)
	{
		print_hex(ft_atoi(argv[1]));
	}
	write(1, "\n", 1);
	return (0);
}

