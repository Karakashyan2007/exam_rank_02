#include <stdlib.h>
#include <stdio.h>

int	is_space(char c)
{
	return(c == ' ' || (c >= 9 && c <= 13));
}

int	count_word(char *str)
{
	int	i;
	int	count;

	count = 0;
	i = 0;
	while(str[i])
	{
		while(str[i] && is_space(str[i]))
			i++;
		if(str[i] || !is_space(str[i]))
			count++;
		while(str[i] && !is_space(str[i]))
			i++;
	}
	return(count);
}

int	word_len(char *str)
{
	int	len;

	len = 0;
	while (str[len] && !is_space(str[len]))
	{
		len++;
	}
	return(len);
}

char	*copy_word(char *str)
{
	int		len;
	int		i;
	char	*arr;
	
	i = 0;
	len = word_len(str);
	arr = malloc(sizeof(char) * (len + 1));
	while (!is_space(str[i]))
	{
		arr[i] = str[i];
		i++;
	}
	arr[i] = '\0';
	return (arr);
}
char	**ft_split(char *str)
{
	int		i;
	char	**array;
	int		w_count;
	int		j;

	j = 0;
	i = 0;
	w_count = count_word(str);
	array = malloc(sizeof(char *) * (w_count + 1));
	while(str[i])
	{
		while (str[i] && is_space(str[i]))
			i++;
		if(str[i] && !is_space(str[i]))
		{
			array[j] = copy_word(&str[i]);
			j++;
		}
		while(str[i] && !is_space(str[i]))
			i++;
	}
	array[j] = NULL;
	return(array);
}

int	main()
{
	char **array;
	array = ft_split("arr fkmfm sss");
	printf("%s", array[2]);
	return(0);
}