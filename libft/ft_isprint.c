/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seruzun <suayp.eruzun@gmail.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/18 12:42:09 by seruzun           #+#    #+#             */
/*   Updated: 2024/05/03 21:02:20 by seruzun          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isprint(int c)
{
	return (c >= 32 && c <= 126);
}
// #include <stdio.h>
// int main() {
//     char *test1 = "Hello, World!";
//     char *test2 = "\nNew Line?";
//     printf("Test1 is printable: %d\n", ft_isprint(test1));  // Should print 1
//     printf("Test2 is printable: %d\n", ft_isprint(test2));  // Should print 0
//     return (0);
// }
