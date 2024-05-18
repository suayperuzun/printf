/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seruzun <suayp.eruzun@gmail.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/03 20:50:08 by seruzun           #+#    #+#             */
/*   Updated: 2024/05/12 16:07:06 by seruzun          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putstr_fd(char *s, int fd)
{
	if (s != NULL)
	{
		write(fd, s, ft_strlen(s));
	}
}

// int	main(void)
// {
// 	ft_putstr_fd("Hello, world!\n", 1);
// 	ft_putstr_fd("An error occurred.\n", 2);
// 	return (0);
// }
