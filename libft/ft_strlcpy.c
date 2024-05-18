/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seruzun <suayp.eruzun@gmail.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/18 14:54:15 by seruzun           #+#    #+#             */
/*   Updated: 2024/05/03 20:55:39 by seruzun          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	unsigned int	i;
	unsigned int	j;

	i = 0;
	j = 0;
	while (src[i] != '\0')
	{
		i++;
	}
	if (size == 0)
		return (i);
	while (j < size - 1 && src[j] != '\0')
	{
		dst[j] = src[j];
		j++;
	}
	dst[j] = '\0';
	return (i);
}
/*
#include <stdio.h>
#include <string.h>

int main (void) {
	char src[40];
	char dst[12];

	memset(dst, '\0', sizeof(dst));
	strcpy(src, "");
	ft_strlcpy(dst, src, 10);
	printf("%s\n", dst);
	printf("%d\n", ft_strlcpy(dst, src, 10));

	strcpy(src, "This1is2tutorialspoint");
	ft_strlcpy(dst, src, 3);
	printf("%s\n", dst);
	printf("%d\n", ft_strlcpy(dst, src, 3));


	return(0);
}
*/
