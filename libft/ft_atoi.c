/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seruzun <suayp.eruzun@gmail.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/22 15:51:47 by seruzun           #+#    #+#             */
/*   Updated: 2024/05/03 21:00:44 by seruzun          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_isspace(char c)
{
	if ((c > 8 && c < 14) || (c == 32))
		return (1);
	return (0);
}

int	ft_atoi(const char *str)
{
	int	sign;
	int	nb;
	int	i;

	nb = 0;
	i = 0;
	sign = 1;
	while (ft_isspace(str[i]))
		i++;
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			sign = -sign;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		nb = nb * 10 + (str[i] - '0');
		i++;
	}
	nb = sign * nb;
	return (nb);
}
/*
#include <ctype.h>
#include <stdio.h>

int	main(void)
{
	char	*str1;

	str1 = "\n \t ---2147483648as2d1";
	printf("%d", ft_atoi(str1));
	// int  i = 2147483647;
	// printf("%d", i);
	return (0);
}
*/
