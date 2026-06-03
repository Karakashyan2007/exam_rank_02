#include <unistd.h>

void	put_nbr(int	n)
{
	char	num;

	num = 0;
	if (n == -2147483648) {
		write(1, "-", 1);
		write(1, "2", 1);
		n = 147483648;
	}
	if (n > 9)
		put_nbr(n / 10);
	num = n % 10 + '0';
	write(1, &num, 1);
}
int	main(int argc, char **argv)
{
	int	i;

	if(argc > 1)
	{
		i = 0;
		while(i < argc)
			i++;
		i--;
		put_nbr(i);
	}
	write(1, "\n", 1);
	return(0);
}