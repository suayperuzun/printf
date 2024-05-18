/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seruzun <suayp.eruzun@gmail.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/03 20:57:06 by seruzun           #+#    #+#             */
/*   Updated: 2024/05/12 16:40:23 by seruzun          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	needle_length;
	size_t	i;

	needle_length = ft_strlen(needle);
	if (!haystack && len == 0)
		return (NULL);
	if (needle_length == 0)
	{
		return ((char *)haystack);
	}
	i = 0;
	while (haystack[i] && i + needle_length <= len)
	{
		if (haystack[i] == needle[0] && ft_strncmp(&haystack[i], needle,
				needle_length) == 0)
			return ((char *)&haystack[i]);
		i++;
	}
	return (NULL);
}
/*
#include <stdio.h>
int	main(void)
{
	const char	*haystack = "Hello, World!";
	const char	*needle = "World";
	char		*result;

	size_t len = 20;
	result = ft_strnstr(NULL, needle, 0);
	if (result != NULL)
	{
		printf("Found '%s' in '%s' within the first %zu characters.\n", needle,
			haystack, len);
	}
	else
	{ printf("'%s' not found within the first %zu characters
of '%s'.\n", needle, len, haystack);
	}
	return (0);
}
*/
