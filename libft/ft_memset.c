/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seruzun <suayp.eruzun@gmail.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/03 20:48:20 by seruzun           #+#    #+#             */
/*   Updated: 2024/05/12 16:03:22 by seruzun          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *s, int value, size_t len)
{
	unsigned char	*p;

	p = s;
	while (len--)
		*p++ = (unsigned char)value;
	return (s);
}

// int main()
// {
//     char buffer[11];

//     ft_memset(buffer, 'A', 10);
//     buffer[10] = '\0';

//     printf("Buffer filled with: %s\n", buffer);

//     return (0);
// }
