#include	<stdlib.h>

int	*ft_range(int start, int end)
{
	int	*arr;
	int	len;
	int	i;

	i = 0;
	len = end - start;
	if(len < 0)
		len = len * -1;
	len++;
	arr = malloc(sizeof(int) * len);
	while(i < len)
	{
		arr[i] = start;
		if(start > end)
			start--;
		if(start < end)
			start++;
		i++;
	}
	return (arr);
}