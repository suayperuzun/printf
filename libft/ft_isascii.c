/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seruzun <suayp.eruzun@gmail.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/18 10:29:26 by seruzun           #+#    #+#             */
/*   Updated: 2024/05/03 21:02:30 by seruzun          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isascii(int c)
{
	return ((unsigned)c <= 127);
}

// #include <stdio.h>
// int main()
// {
//     int c = 0;
//     printf("%d", ft_isascii(c));
//     return (0);
// }