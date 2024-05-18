/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seruzun <suayp.eruzun@gmail.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/18 10:29:26 by seruzun           #+#    #+#             */
/*   Updated: 2024/05/03 21:01:55 by seruzun          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalnum(int c)
{
	if (!((c > 64 && c < 91) || (c > 96 && c < 123) || (c > 47 && c < 58)))
		return (0);
	return (1);
}

// #include <stdio.h>
// int main(int argc, char **argv)
// {
//     if (argc == 0 )
//         return (0);
//     printf("%d", ft_isalnum(argv[1]));
//     return (0);
// }
