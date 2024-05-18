/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seruzun <suayp.eruzun@gmail.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/03 20:48:05 by seruzun           #+#    #+#             */
/*   Updated: 2024/05/03 21:06:59 by seruzun          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char		*d;
	const unsigned char	*s = src;
	const unsigned char	*lasts = s + (n - 1);
	unsigned char		*lastd;

	d = dest;
	if ((dest == NULL && src == NULL) || n == 0)
		return (dest);
	if (d < s)
	{
		while (n--)
			*d++ = *s++;
	}
	else
	{
		lastd = d + (n - 1);
		while (n--)
		{
			*lastd-- = *lasts--;
		}
	}
	return (dest);
}

// int main(void) {
//     char src[] = "Hello, World!";
//     char dest[20];

//     ft_memmove(dest, src, strlen(src) + 1);

//     printf("Source: %s\n", src);
//     printf("Destination: %s\n", dest);

//     return (0);
// }
