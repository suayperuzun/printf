/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_xx.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seruzun <suayp.eruzun@gmail.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/22 16:45:58 by seruzun           #+#    #+#             */
/*   Updated: 2024/05/18 12:12:14 by seruzun          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include "libft/libft.h"

int		ft_len_nbr(long nbr, int baselength);
char	*ft_if_zero(int nbr, char *str, char *base);

int	ft_putnbr_xx(int nbr, char *base)
{
	int		baselength;
	char	str[9];
	int		nbr_len;
	int		str_len;
	long	nbrx;

	baselength = ft_strlen(base);
	if (nbr < 0)
		nbrx = 4294967296 + nbr;
	else
		nbrx = nbr;
	nbr_len = ft_len_nbr(nbrx, baselength);
	str_len = nbr_len;
	str[0] = *ft_if_zero(nbr, str, base);
	while (nbrx != 0)
	{
		str[--nbr_len] = base[nbrx % baselength];
		nbrx /= baselength;
	}
	return (write(1, str, str_len), str_len);
}

// #include <stdio.h>
// #include <stdlib.h>

// int	main(int argc, char **argv)
// {
// 	char	*base;
// 	int		i;
// 	int x;
// 	if (argc != 3)
// 	{
// 		printf("Usage: %s <number>\n", argv[0]);
// 		return (1);
// 	}
// 	x = atoi(argv[2]);
// 	i = atoi(argv[1]);
// 	ft_putnbr_xX(i, x);
// 	return (0);
// }
