/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seruzun <suayp.eruzun@gmail.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/03 20:56:23 by seruzun           #+#    #+#             */
/*   Updated: 2024/05/12 17:28:10 by seruzun          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// char transform(unsigned int i, char c)
//{
//     return (c + 1);
// }

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	size_t			length;
	char			*result;
	unsigned int	i;

	if (!s || !f)
		return (NULL);
	length = ft_strlen(s);
	result = (char *)malloc(length + 1);
	if (!result)
		return (NULL);
	i = 0;
	while (i < length)
	{
		result[i] = f(i, s[i]);
		i++;
	}
	result[length] = '\0';
	return (result);
}
/*
#include <stdio.h>
int	main(void)
{
	char const	*original;
	char		*modified;

	original = "Hello, World!";
	modified = ft_strmapi(original, transform);
	if (modified)
	{
		printf("Original: %s\n", original);
		printf("Modified: %s\n", modified);
		free(modified);
	}
	else
	{
		printf("Memory allocation failed.\n");
	}
	return (0);
}
*/