/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seruzun <suayp.eruzun@gmail.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/03 20:52:13 by seruzun           #+#    #+#             */
/*   Updated: 2024/05/12 16:38:06 by seruzun          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	s1_len;
	size_t	s2_len;
	size_t	s3_len;
	char	*s3;

	if (!s1 || !s2)
		return (NULL);
	s1_len = ft_strlen(s1);
	s2_len = ft_strlen(s2);
	s3_len = s1_len + s2_len;
	s3 = (char *)malloc(s3_len + 1);
	if (s3 == NULL)
	{
		return (NULL);
	}
	ft_strlcpy(s3, s1, s1_len + 1);
	ft_strlcat(s3, s2, s3_len + 1);
	return (s3);
}
/*
int	main(void)
{
	char const	*prefix;
	char const	*suffix;
	char		*result;

	prefix = "Hello, ";
	suffix = "World!";
	result = ft_strjoin(prefix, suffix);
	if (result == NULL)
	{
		printf("Memory allocation failed.\n");
	}
	else
	{
		printf("Joined string: %s\n", result);
		free(result);
	}
	return (0);
}
*/