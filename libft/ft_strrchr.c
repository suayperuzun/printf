/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seruzun <suayp.eruzun@gmail.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/03 20:58:14 by seruzun           #+#    #+#             */
/*   Updated: 2024/05/12 16:40:51 by seruzun          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *str, int c)
{
	const char	*last_occurrence = NULL;

	while (*str)
	{
		if (*str == (char)c)
			last_occurrence = str;
		str++;
	}
	if ((char)c == '\0')
		return ((char *)str);
	return ((char *)last_occurrence);
}
/*
#include <stdio.h>
int	main(void)
{
	const char	*msg = "Hello, World! Welcome to C programming.";
	char		target;
	char		*result;

	target = 'o';
	result = ft_strrchr(msg, target);
	if (result != NULL)
	{
		printf("Last occurrence of '%c': \"%s\"\n", target, result);
	}
	else
	{
		printf("Character '%c' not found in \"%s\"\n", target, msg);
	}
	return (0);
}
*/