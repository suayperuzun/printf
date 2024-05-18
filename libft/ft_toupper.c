/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seruzun <suayp.eruzun@gmail.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/03 21:00:06 by seruzun           #+#    #+#             */
/*   Updated: 2024/05/12 16:44:39 by seruzun          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_toupper(int c)
{
	if (c >= 'a' && c <= 'z')
		c = c - 32;
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

    printf("%d\n", ft_toupper(str1));
    printf("%d\n", ft_toupper(str2));
    printf("%d\n", ft_toupper(str3));
    printf("%d\n", ft_toupper(str4));
    return (0);

}
*/