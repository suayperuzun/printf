/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seruzun <suayp.eruzun@gmail.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/03 20:47:49 by seruzun           #+#    #+#             */
/*   Updated: 2024/05/12 16:01:25 by seruzun          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	unsigned char		*d;
	const unsigned char	*s = (const unsigned char *)src;

	if ((dest == NULL && src == NULL) || n == 0)
		return (dest);
	d = (unsigned char *)dest;
	while (n--)
	{
		*d++ = *s++;
	}
	return (dest);
}

/*
#include <stdio.h>

int	main(void)
{
	char	*src;
	char	*src11;

	src = NULL;
	char *dest = NULL;

	ft_memcpy(dest, src, 0);
	printf("Source: %s\n", src);
	printf("Destination: %s\n", dest);
	src11 = NULL;
	char *dest11 = NULL;

	
	memcpy(dest11, src11, 0);
	printf("Source: |%s|\n", src11);
	printf("Destination: |%s|\n", dest11);
	return (0);
}
*/