#include <unistd.h>

int	ft_atoi(char *str)
{
	int	i;
	int	res;
	int	sign;

	i = 0;
	res = 0;
	sign = 1;
	while(str[i] == ' ' || (str[i] >= 9 && str[i] <= 13))
		i++;
	if(str[i] == '-' || str[i] == '+')
	{
		if(str[i] == '-')
			sign = sign * -1;
		i++;
	}
	while(str[i] >= '0' && str[i] <= '9')
	{
		res = res * 10 + (str[i] - '0');
		i++;
	}
	return(res * sign);
}

int	is_prime(int num)
{
	int	i = 2;

	if(num <= 1)
		return(0);
	while(i * i <= num)
	{
		if(num % i == 0)
			return(0);
		i++;
	}
	return(1);
}

void putnbr(int n) {
    if (n >= 10)
        putnbr(n/10);
    char digit = n % 10 + '0';
    write(1, &digit, 1);
}

int	main(int argc, char **argv)
{
	int	i;
	int	count;
	int num;

	if(argc == 2)
	{
		i = 2;
		count = 0;
		num = ft_atoi(argv[1]);
		while(i <= num)
		{
			if(is_prime(i))
				count += i;
			i++;
		}
		putnbr(count);
	}
	else
		write(1, "0", 1);
	write(1, "\n", 1);
	return (0);
}