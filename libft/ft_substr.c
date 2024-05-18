/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seruzun <suayp.eruzun@gmail.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/03 20:59:31 by seruzun           #+#    #+#             */
/*   Updated: 2024/05/12 16:41:31 by seruzun          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*substr;
	size_t	s_len;

	if (!s)
		return (NULL);
	s_len = ft_strlen(s);
	if (start >= s_len)
	{
		substr = (char *)malloc(1);
		if (substr != NULL)
			substr[0] = '\0';
		return (substr);
	}
	if (len > s_len - start)
		len = s_len - start;
	substr = (char *)malloc(len + 1);
	if (substr == NULL)
		return (NULL);
	ft_memcpy(substr, s + start, len);
	substr[len] = '\0';
	return (substr);
}
/*
#include <stdio.h>
int	main(void)
{
	const char		*text = "Hello, World!";
	unsigned int	start;
	size_t			length;
	char			*result;

	start = 7;
	length = 5;
	result = ft_substr(text, start, length);
	if (result == NULL)
	{
		printf("Failed to allocate memory for the substring.\n");
	}
	else
	{
		printf("Substring: %s\n", result);
		free(result);
	}
	return (0);
}
*/