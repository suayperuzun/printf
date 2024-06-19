/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seruzun <suayp.eruzun@gmail.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/22 16:45:58 by seruzun           #+#    #+#             */
/*   Updated: 2024/06/17 10:17:54 by seruzun          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_checkbase(char *base, int len)
{
	int	i;
	int	j;

	i = 0;
	if (len < 2)
		return (0);
	while (base[i] != '\0')
	{
		j = 0;
		while (base[j] != '\0')
		{
			if (base[i] == base[j] && (i != j))
				return (0);
			j++;
		}
		if ((base[i] == '+') || (base[i] == '-'))
			return (0);
		i++;
	}
	return (1);
}

int	ft_nbr_neg(int nbr)
{
	if (nbr < 0)
	{
		write(1, "-", 1);
		nbr = -nbr;
	}
	return (nbr);
}

int	ft_len_nbr(long nbr, int baselength)
{
	int	nbr_len;

	nbr_len = 0;
	if (nbr == 0)
		nbr_len = 1;
	while (nbr != 0)
	{
		nbr /= baselength;
		nbr_len++;
	}
	return (nbr_len);
}

char	*ft_if_zero(int nbr, char *str, char *base)
{
	if (nbr == 0)
	{
		str[0] = base[0];
		str[1] = '\0';
	}
	return (str);
}

int	ft_putnbr_base(int nbr, char *base)
{
	int		baselength;
	char	str[40];
	int		nbr_len;
	int		str_len;

	baselength = 0;
	while (base[baselength] != '\0')
		baselength++;
	if (!ft_checkbase(base, baselength))
		return (0);
	nbr_len = ft_len_nbr(nbr, baselength);
	str_len = nbr_len;
	if (nbr == -2147483648)
	{
		str[str_len++] = base[-(nbr % baselength)];
		nbr /= baselength;
	}
	nbr = ft_nbr_neg(nbr);
	str[0] = *ft_if_zero(nbr, str, base);
	while (nbr != 0)
	{
		str[--nbr_len] = base[nbr % baselength];
		nbr /= baselength;
	}
	return (write(1, str, str_len), str_len);
}
/*
#include <stdio.h>
#include <stdlib.h>

int	main(int argc, char **argv)
{
	char	*base;
	int		i;

	if (argc != 3) {
		printf("Usage: %s <number>\n", argv[0]);
		return (1);
	}
	base = argv[2];
	i = atoi(argv[1]);
	ft_putnbr_base(i, base);
	return (0);
}
*/