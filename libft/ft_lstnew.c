/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seruzun <suayp.eruzun@gmail.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/03 20:46:05 by seruzun           #+#    #+#             */
/*   Updated: 2024/05/12 15:59:31 by seruzun          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*node;

	node = malloc(sizeof(t_list));
	if (node == NULL)
	{
		return (NULL);
	}
	node->content = content;
	node->next = NULL;
	return (node);
}

// int main()
//{
//     int number = 42;
//     t_list *node = ft_lstnew(&number);

//     if (node != NULL)
//     {
//         printf("Node created with content: %d\n", *(int *)node->content);

//     free(node);
//     }
//     else
//     {
//         printf("Failed to create the node\n");
//     }

//     return (0);
// }
