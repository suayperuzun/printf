/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seruzun <suayp.eruzun@gmail.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/03 21:04:28 by seruzun           #+#    #+#             */
/*   Updated: 2024/05/12 15:49:17 by seruzun          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	if (new != NULL)
	{
		new->next = *lst;
		*lst = new;
	}
}

// int main() {
//     int a = 5;
//     int b = 10;

//     t_list *head = ft_lstnew(&a);
//     t_list *new_node = ft_lstnew(&b);

//     ft_lstadd_front(&head, new_node);

//     for (t_list *current = head; current != NULL; current = current->next)
//     {
//         printf("Node content: %d\n", *(int *)(current->content));
//     }

//     // Cleanup
//     t_list *temp;
//     while (head != NULL)
//     {
//         temp = head;
//         head = head->next;
//         free(temp);
//     }

//     return (0);
// }
