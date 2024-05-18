/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seruzun <suayp.eruzun@gmail.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/03 20:50:56 by seruzun           #+#    #+#             */
/*   Updated: 2024/05/12 16:35:43 by seruzun          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *str, int c)
{
	while (*str != '\0')
	{
		if (*str == (char)c)
		{
			return ((char *)str);
		}
		str++;
	}
	if ((char)c == '\0')
	{
		return ((char *)str);
	}
	return (NULL);
}
/*
#include <stdio.h>
int	main(void)
{
	const char	*msg = "Hello, World!";
	char		target;
	char		*result;

	target = 'W';
	result = ft_strchr(msg, target);
	if (result != NULL)
	{
		printf("Character '%c' found: \"%s\"\n", target, result);
	}
	else
	{
		printf("Character '%c' not found in \"%s\"\n", target, msg);
	}
	result = ft_strchr(msg, '\0');
	if (result != NULL)
	{
		printf("Null terminator found at position: %ld\n", (long)(result
				- msg));
	}
	return (0);
}
*/