#include <unistd.h>

int	ft_atoi(char *str)
{
	int	result;
	int	i;
	int	sign;

	sign = 1;
	i = 0;
	result = 0;
	while(str[i] == ' ' || (str[i] >= 9 && str[i] <= 13))
		i++;
	if(str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
		{
			sign = -1;
		}
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		result = result * 10 + (str[i] - '0');
		i++;
	}
	return(sign * result);
}

void	print_hex(int	num)
{
	char	*base = "0123456789abcdef";
	if(num >= 16)
		print_hex(num / 16);
	write(1, &base[num % 16], 1);
}

int	main(int argc, char **argv)
{
	int	num;

	if(argc == 2)
	{
		num = ft_atoi(argv[1]);
		print_hex(num);
	}
	write(1, "\n", 1);
	return(0);
}