/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seruzun <suayp.eruzun@gmail.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/03 20:42:28 by seruzun           #+#    #+#             */
/*   Updated: 2024/05/12 15:54:13 by seruzun          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	if (lst == NULL)
	{
		return (NULL);
	}
	while (lst->next != NULL)
	{
		lst = lst->next;
	}
	return (lst);
}

// int main() {
//     int a = 5, b = 10, c = 15;
//     t_list *head = ft_lstnew(&a);
//     t_list *second = ft_lstnew(&b);
//     t_list *third = ft_lstnew(&c);

//     head->next = second;
//     second->next = third;

//     t_list *last = ft_lstlast(head);
//     if (last != NULL)
//     {
//         printf("The last node: %d\n", *(int *)(last->content));
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
