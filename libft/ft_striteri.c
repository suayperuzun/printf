/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seruzun <suayp.eruzun@gmail.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/03 20:51:35 by seruzun           #+#    #+#             */
/*   Updated: 2024/05/12 16:37:44 by seruzun          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// void	capitalize(unsigned int i, char *c)
// {
// 	if (*c >= 'a' && *c <= 'z')
// 	{
// 		*c -= 32;
// 	}
// }

void	ft_striteri(char *s, void (*f)(unsigned int, char *))
{
	unsigned int	i;

	if (s && f)
	{
		i = 0;
		while (s[i] != '\0')
		{
			f(i, &s[i]);
			i++;
		}
	}
}

// #include <stdio.h>

// int	main(void)
// {
// 	char	str[] = "hello, world!";

// 	ft_striteri(str, capitalize);
// 	printf("Modified string: %s\n", str);
// 	return (0);
// }
