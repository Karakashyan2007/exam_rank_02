#include <unistd.h>

int	ft_atoi(char *str)
{
	int	i;
	int sign;
	int result;

	i = 0;
	sign = 1;
	result = 0;

	while(str[i] == ' ' || (str[i] >= 9 && str[i] <= 13))
		i++;
	if(str[i] == '-' || str[i] == '+')
	{
		if(str[i] == '-')
			sign = -1;
		i++;
	}
	while(str[i])
	{
		result = result * 10 + (str[i] - '0');
		i++;
	}
	return(result);
}

void	put_nbr(unsigned int	num)
{
	char ch;

	if(num > 9)
		put_nbr(num / 10);
	ch = num % 10 + '0';
	write(1, &ch, 1);
}

int	main(int argc, char **argv)
{
	unsigned int	num;
	int				i;
	int				res;

	if(argc == 2)
	{
		i = 1;
		res = 0;
		num  = ft_atoi(argv[1]);
		while(i <= 9)
		{
			res = i * num;
			put_nbr(i);
			write(1, " x ", 3);
			put_nbr(num);
			write(1, " = ", 3);
			put_nbr(res);
			write(1, "\n", 1);
			i++;
		}
	}
	return(0);
}