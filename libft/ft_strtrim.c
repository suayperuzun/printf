/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seruzun <suayp.eruzun@gmail.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/03 20:58:50 by seruzun           #+#    #+#             */
/*   Updated: 2024/05/12 16:41:11 by seruzun          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	is_in_set(char c, const char *set)
{
	while (*set)
	{
		if (c == *set)
			return (1);
		set++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	const char	*start;
	const char	*end;
	char		*trimmed;

	if (!s1 || !set)
		return (NULL);
	start = s1;
	while (*start && is_in_set(*start, set))
		start++;
	end = s1 + ft_strlen(s1) - 1;
	while (end > start && is_in_set(*end, set))
		end--;
	trimmed = (char *)malloc((end - start + 2) * sizeof(char));
	if (!trimmed)
		return (NULL);
	ft_memcpy(trimmed, start, end - start + 1);
	trimmed[end - start + 1] = '\0';
	return (trimmed);
}
/*
#include <stdio.h>
int	main(void)
{
	char const	*s1;
	char const	*set;
	char		*trimmed;

	s1 = "   Hello, World!   ";
	set = " ";
	trimmed = ft_strtrim(s1, set);
	if (trimmed)
	{
		printf("Trimmed string: '%s'\n", trimmed);
		free(trimmed);
	}
	else
	{
		printf("Failed to allocate memory for the trimmed string.\n");
	}
	return (0);
}
*/