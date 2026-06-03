#include <stdlib.h>

int	is_space(char c)
{
	return(c == ' ' || (c >= 9 && c <= 13));
}

int	count_words(char *str)
{
	int	count;
	int i;

	i = 0;
	count = 0;
	while(str[i])
	{
		while(is_space(str[i]))
			i++;
		if(str[i] != '\0')
			count++;
		i++;
	}
	return(count);
}

int	word_len(char *str)
{
	int	word_len;
	
	word_len = 0;
	while(str[word_len] && !is_space(str[word_len]))
		word_len++;
	return(word_len);
}

char	*copy_word(char *str)
{
	int	i;
	char	*word;
	int	len;

	i = 0;
	len = word_len(str);
	word = malloc(sizeof(char) * (len + 1));
	if(!word)
		return(NULL);
	while(i < len)
	{
		word[i] = str[i];
		i++;
	}
	word[i] = '\0';
	return(word);
}

char	**ft_split(char	*str)
{
	int	i;
	int	words;
	char	**array;
	int	j;

	j = 0;
	i = 0;
	words = count_word(str);
	array = malloc(sizeof(char *) * (words + 1));
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
		while (str[i] && !is_space(str[i]))
			i++;
	}
	array[j] = NULL;
	return(array);
}
