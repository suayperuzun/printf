/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seruzun <suayp.eruzun@gmail.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/03 20:06:39 by seruzun           #+#    #+#             */
/*   Updated: 2024/05/12 16:46:16 by seruzun          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*ptr;
	size_t	total_size;

	if (nmemb != 0 && SIZE_MAX / nmemb < size)
		return (NULL);
	total_size = nmemb * size;
	ptr = malloc(total_size);
	if (!ptr)
		return (NULL);
	ft_memset(ptr, 0, total_size);
	return (ptr);
}
/*
#include <stdio.h>
int	main(void)
{
	int	*arr;

	arr = (int *)ft_calloc(5, sizeof(int));
	if (arr == NULL)
	{
		printf("Memory allocation failed\n");
		return (1);
	}
	for (int i = 0; i < 5; i++)
	{
		printf("%d ", arr[i]);
	}
	free(arr);
	return (0);
}
*/