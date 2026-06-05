#include <unistd.h>

void	print_bits(unsigned char octet)
{
	int	i = 7;
	unsigned char bit;

	bit = 0;
	while(i >= 0)
	{
		bit = ((octet >> i) & 1) + '0';
		write(1, &bit, 1);
		i--;
	}
}

int	main()
{
	unsigned char c;
	c = 1;
	print_bits(c);
	return(0);
}