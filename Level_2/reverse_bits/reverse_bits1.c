unsigned char	print_bits(unsigned char octet)
{
	int				i;
	unsigned char	bit;

	i = 0;
	bit = 0;
	while (i <= 7)
	{
		bit = (bit << 1) | (octet & 1);
		octet = octet >> 1;
		i++;
	}
	return(bit);
}