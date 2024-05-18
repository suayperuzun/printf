/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seruzun <suayp.eruzun@gmail.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/03 20:23:41 by seruzun           #+#    #+#             */
/*   Updated: 2024/05/12 16:36:35 by seruzun          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	size_t	len;
	char	*new_str;

	len = ft_strlen(s) + 1;
	new_str = (char *)malloc(len);
	if (new_str == NULL)
		return (NULL);
	ft_memcpy(new_str, s, len);
	return (new_str);
}
/*
#include <stdio.h>
int	main(void)
{
	const char	*original = "Hello, World!";
	char		*duplicate;

	duplicate = ft_strdup(original);
	if (duplicate == NULL)
	{
		printf("Failed to allocate memory for duplicate string.\n");
		return (1); // Indicate failure
	}
	printf("Original: %s\n", original);
	printf("Duplicate: %s\n", duplicate);
	free(duplicate); // Free the allocated memory for the duplicate string
	return (0);
}*/