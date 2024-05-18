/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seruzun <suayp.eruzun@gmail.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/03 20:47:03 by seruzun           #+#    #+#             */
/*   Updated: 2024/05/12 17:37:20 by seruzun          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	const unsigned char	*p = (const unsigned char *)s;

	while (n-- > 0)
	{
		if (*p == (unsigned char)c)
			return ((void *)p);
		p++;
	}
	return (NULL);
}

// int main() {
//     char arr[] = {0, 1, 2, 3, 4, 5, 3, 7};
//     int target = 3;

//     char *result = (char *)ft_memchr(arr, target, sizeof(arr));

//     if (result != NULL)
//     {
//   printf("Byte '%d' found at position: %ld\n", target, (long)(result- arr));
//     }
//     else
//     {
//         printf("Byte '%d' not found in the array.\n", target);
//     }

//     return (0);
// }
