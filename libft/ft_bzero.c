/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seruzun <suayp.eruzun@gmail.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/03 21:00:55 by seruzun           #+#    #+#             */
/*   Updated: 2024/05/12 16:47:43 by seruzun          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	unsigned char	*p;

	p = s;
	while (n--)
		*p++ = 0;
}

/*
#include <stdio.h>

int	main(void)
{
	char	buffer[11];

	ft_bzero(buffer, 10);
	buffer[10] = '\0';
	printf("Buffer filled with: %s\n", buffer);
	return (0);
}
*/