/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seruzun <suayp.eruzun@gmail.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/03 20:47:24 by seruzun           #+#    #+#             */
/*   Updated: 2024/05/12 16:00:56 by seruzun          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	const unsigned char	*p1 = s1, *p2 = s2;

	while (n-- > 0)
	{
		if (*p1 != *p2)
			return (*p1 - *p2);
		p1++;
		p2++;
	}
	return (0);
}

// int main() {
//     char arr1[] = {1, 2, 3, 4, 5};
//     char arr2[] = {1, 2, 3, 4, 5};
//     char arr3[] = {1, 2, 3, 2, 1};

//printf("Comparing arr1 and arr2: %d\n", ft_memcmp(arr1, arr2, sizeof(arr1)));

// printf("Comparing arr1 and arr3: %d\n", ft_memcmp(arr1, arr3, sizeof(arr1)));

//     return (0);
// }
