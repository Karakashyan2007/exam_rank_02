unsigned int	pgcd(unsigned int a, unsigned int b)
{
	unsigned int	tmp;

	tmp = 0;
	while (b != 0)
	{
		tmp  = b;
		b = a % b;
		a = tmp;
	}
	return(a);
}
unsigned int	lcm(unsigned int a, unsigned int b)
{
	unsigned int	res_pgcd;

	if(!a || !b)
		return(0);
	res_pgcd = pgcd(a, b);
	return((a /res_pgcd) * b);
}
