#include <stdlib.h>

int	*ft_range(int start, int end)
{
	int	*arr;
	int	i;
	int	len;

	i = 0;
	len = end - start;
	if(len < 0)
		len = len * -1;
	len = len + 1;
	arr = malloc(sizeof(int) * (len));
	if(!arr)
		return(NULL);
	while(i < len)
	{
		arr[i] = start;
		if(start > end)
			start--;
		else
			start ++;
		i++;
	}
	return(arr);
}
