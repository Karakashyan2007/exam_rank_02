#include <stdlib.h>

int     *ft_rrange(int start, int end)
{
	int	i= 0;
	int	len = start - end;
	if(len < 0)
		len = -len;
	len += 1;
	int	*arr = malloc(sizeof(int) * len);
	while(i < len)
	{
		if(start > end)
		{
			arr[i] = end;
			end++;
		}
		else
		{
			arr[i] = end;
			end--;
		}
		i++;
	}
	return(arr);
}