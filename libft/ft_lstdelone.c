/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seruzun <suayp.eruzun@gmail.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/03 20:41:25 by seruzun           #+#    #+#             */
/*   Updated: 2024/05/12 15:52:07 by seruzun          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstdelone(t_list *lst, void (*del)(void *))
{
	if (lst != NULL && del != NULL)
	{
		del(lst->content);
		free(lst);
	}
}

/*

void	free_content(void *content)
{
  free(content);
}
*/

// int main()
//{
//   int *a = malloc(sizeof(int));
//   *a = 42;

//   t_list *node = ft_lstnew(a);

//   ft_lstdelone(node, free_content);

//   return (0);
// }
