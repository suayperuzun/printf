/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seruzun <suayp.eruzun@gmail.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/18 10:29:26 by seruzun           #+#    #+#             */
/*   Updated: 2024/05/03 21:03:27 by seruzun          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isdigit(int c)
{
	return (c > 47 && c < 58);
}
/*
#include <stdio.h>

int	main(void)
{
	int	c;

	c = '0' -1 ;
	printf("%d", ft_isdigit(c));
	return (0);
}
*/