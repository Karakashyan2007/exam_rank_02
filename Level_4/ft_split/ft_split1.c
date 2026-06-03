#include <stdlib.h>
#include <stdio.h>

int	is_space(char c)
{
	return(c == ' ' || (c >= 9 && c <= 13));
}

int	word_count(char *str)
{
	int	i;
	int count;

	count = 0;
	i = 0;
	while(str[i])
	{
		while(is_space(str[i]))
			i++;
		if(str[i] != '\0')
		{
			count++;
			i++;
		}
		while(str[i] && !is_space(str[i]))
			i++;
	}
	return(count);
}

int	word_len(char *str)
{
	int	i;

	i = 0;
	while(str[i] && is_space(str[i]))
		i++;
	return(i);
}

char	*copy_word(char	*str)
{
	int	i;
	char	*word;
	int	len;

	len = word_len(str);
	i = 0;
	word = malloc(sizeof(char) * (len + 1));
	while(!is_space(str[i]))
	{
		word[i] = str[i];
		i++;
	}
	word[i] = '\0';
	return (word);
}
char	**ft_split(char *str)
{
	char	**array;
	int	i;
	int	count;
	int	j;

	j = 0;
	count = word_count(str);
	i = 0;
	array = malloc(sizeof(char *) * (count + 1));
	if(!array)
		return(NULL);
	while(str[i])
	{
		while(is_space(str[i]))
			i++;
		if(str[i] != '\0')
		{
			array[j] = copy_word(&str[i]);
			j++;
		}
		while(str[i] && !is_space(str[i]))
		{
			i++;
		}
	}
	array[j] = NULL;
	return(array);
}

int	main()
{
	char	**array = ft_split("  abc bcd efg ");
	printf("%s", array[0]);
	return(0);
}