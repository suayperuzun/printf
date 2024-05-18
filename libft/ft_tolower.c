/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seruzun <suayp.eruzun@gmail.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/03 20:59:51 by seruzun           #+#    #+#             */
/*   Updated: 2024/05/12 16:44:45 by seruzun          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_tolower(int c)
{
	if (c >= 'A' && c <= 'Z')
		c = c + 32;
	return (c);
}
/*
#include <stdio.h>
int main(void)
{
    int str1 = 4;
    int str2 = 51;
    int str3 = 123548;
    int str4 = -130;

    printf("%d\n", ft_tolower(str1));
    printf("%d\n", ft_tolower(str2));
    printf("%d\n", ft_tolower(str3));
    printf("%d\n", ft_tolower(str4));
    return (0);

}
*/