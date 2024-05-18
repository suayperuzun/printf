/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seruzun <suayp.eruzun@gmail.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/18 10:29:26 by seruzun           #+#    #+#             */
/*   Updated: 2024/05/03 21:01:58 by seruzun          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalpha(int c)
{
	if (!((c > 64 && c < 91) || (c > 96 && c < 123)))
		return (0);
	return (1);
}

/*
#include <stdio.h>
int main(void)
{
    int c = 'a' -1;
    printf("%d", ft_isalpha(c));
    return 0;
}
*/