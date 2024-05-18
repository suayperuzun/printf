/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seruzun <suayp.eruzun@gmail.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/20 06:07:56 by seruzun           #+#    #+#             */
/*   Updated: 2024/05/03 20:56:42 by seruzun          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (s1[i] != '\0' && s2[i] != '\0' && s1[i] == s2[i] && i < n)
	{
		i++;
	}
	if (i == n)
	{
		return (0);
	}
	else
	{
		return ((unsigned char)s1[i] - (unsigned char)s2[i]);
	}
}
/*
#include <stdio.h>
#include <string.h>

int	main(void)
{
	char	*s1;
	char	*s2;

	s1 = "hahaha";
	s2 = "hah1";
	printf("%d", strncmp(s1,s2,3));
	printf("\n");
	printf("%d", ft_strncmp(s1,s2,3));
	return (0);
}
*/
