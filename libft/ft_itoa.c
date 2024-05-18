/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seruzun <suayp.eruzun@gmail.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/03 20:35:25 by seruzun           #+#    #+#             */
/*   Updated: 2024/05/12 16:46:48 by seruzun          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	ft_nbrlen(int n)
{
	size_t	count;

	count = 0;
	if (n <= 0)
		count = 1;
	while (n)
	{
		n /= 10;
		count++;
	}
	return (count);
}

size_t	ft_abs(int a)
{
	if (a > 0)
		return ((size_t)a);
	if (a == -2147483648)
		return ((size_t)2147483648);
	return ((size_t)a * -1);
}

char	*ft_itoa(int n)
{
	char	*str;
	size_t	len;

	len = ft_nbrlen(n);
	str = (char *)malloc(sizeof(char) * (++len));
	if (!str)
		return (NULL);
	str[--len] = '\0';
	if (!n)
		str[--len] = '0';
	while (n)
	{
		str[--len] = ft_abs(n % 10) + '0';
		n = n / 10;
	}
	if (len)
		str[--len] = '-';
	return (str);
}
/*
#include <stdio.h>
int	main(void)
{
	int		numbers[] = {INT_MIN, -1, 0, 1, 1234, -1234};
	char	*str;

	for (int i = 0; i < sizeof(numbers) / sizeof(numbers[0]); i++)
	{
		str = ft_itoa(numbers[i]);
		if (str)
		{
			printf("%d is converted to \"%s\"\n", numbers[i], str);
			free(str);
		}
	}
	return (0);
}
*/