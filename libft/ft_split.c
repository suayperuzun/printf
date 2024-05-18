/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seruzun <suayp.eruzun@gmail.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/03 20:17:36 by seruzun           #+#    #+#             */
/*   Updated: 2024/05/12 16:35:54 by seruzun          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	count_words(const char *s, char c)
{
	int	count;
	int	in_word;

	count = 0;
	in_word = 0;
	while (*s)
	{
		if (*s != c && in_word == 0)
		{
			in_word = 1;
			count++;
		}
		else if (*s == c)
		{
			in_word = 0;
		}
		s++;
	}
	return (count);
}

static char	*alloc_word(const char *start, size_t len)
{
	char	*word;

	word = (char *)malloc(len + 1);
	if (!word)
		return (NULL);
	ft_memcpy(word, start, len);
	word[len] = '\0';
	return (word);
}

static void	free_words(char **words, int count)
{
	int	i;

	i = 0;
	while (i < count)
	{
		free(words[i]);
		i++;
	}
	free(words);
}

static char	**fill_words(char **result, const char *s, char c, int word_count)
{
	int			index;
	const char	*word_start;

	index = 0;
	while (*s)
	{
		while (*s == c)
			s++;
		if (*s)
		{
			word_start = s;
			while (*s && *s != c)
				s++;
			result[index] = alloc_word(word_start, s - word_start);
			if (!result[index])
			{
				free_words(result, index);
				return (NULL);
			}
			index++;
		}
	}
	result[word_count] = NULL;
	return (result);
}

char	**ft_split(char const *s, char c)
{
	int		word_count;
	char	**result;

	if (!s)
		return (NULL);
	word_count = count_words(s, c);
	result = (char **)malloc(sizeof(char *) * (word_count + 1));
	if (!result)
		return (NULL);
	return (fill_words(result, s, c, word_count));
}
/*
#include <stdio.h>

int	main(void)
{
	char const	*str;
	char		delimiter;
	char		**words;

	str = "Hello, World! Welcome to 42!";
	delimiter = ' ';
	words = ft_split(str, delimiter);
	if (words)
	{
		for (int i = 0; words[i]; i++)
		{
			printf("Substring[%d]: '%s'\n", i, words[i]);
			free(words[i]); // Free each substring
		}
		free(words); // Free the array of pointers
	}
	return (0);
}
*/