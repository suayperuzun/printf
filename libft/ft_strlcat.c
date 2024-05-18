/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seruzun <suayp.eruzun@gmail.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/20 06:20:50 by seruzun           #+#    #+#             */
/*   Updated: 2024/05/12 16:38:56 by seruzun          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	unsigned int	i;
	unsigned int	j;
	size_t			dest_len;

	i = 0;
	j = 0;
	if ((!dst || !src) && size == 0)
		return (0);
	while (dst[i] != '\0' && i < size)
		i++;
	dest_len = i;
	if (size == 0)
		return (ft_strlen(src));
	while ((src[j] != '\0') && (i < size - 1))
	{
		dst[i] = src[j];
		j++;
		i++;
	}
	if (dest_len < size)
		dst[i] = '\0';
	return (dest_len + ft_strlen(src));
}
/*
#include <bsd/string.h>
#include <stdio.h>

int	main(void)
{
	char	destination[12] = "Hello";
	char	*source;
	int		i;
	char	destination2[10] = "Hello";
	size_t	total_length;
	char	destination3[12] = "Hello";
	int		j;
	char	destination4[12] = "Hello";
	int		k;

	source = " World";
	i = ft_strlcat(destination, source, sizeof(destination));
	printf("Result: %d\n", i);
	printf("Result: %s\n", destination);
	total_length = ft_strlcat(destination2, source, sizeof(destination2));
	if (total_length >= sizeof(destination2))
	{
		printf("String was truncated: %s\n", destination2);
	}
	else
	{
		printf("Concatenated String: %s\n", destination2);
	}
	// when size = 0
	j = ft_strlcat(destination3, source, 0);
	printf("Result: %d\n", j);
	printf("Result: %s\n", destination3);
	// when size = 0 with strlcat fnc
	k = strlcat(destination4, source, 0);
	printf("Result: %d\n", k);
	printf("Result: %s\n", destination4);
	return (0);
}
*/