unsigned char	reverse_bits(unsigned char octet)
{
	unsigned char	bit;
	int				i;

	i = 0;
	while(i < 8)
	{
		bit = (bit << 1) | (octet & 1);
		octet = octet >> 1;
		i++;
	}
	return (bit);
}