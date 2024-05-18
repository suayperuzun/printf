/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seruzun <suayp.eruzun@gmail.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/03 21:04:04 by seruzun           #+#    #+#             */
/*   Updated: 2024/05/12 16:46:59 by seruzun          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
t_list	*ft_lstlast(t_list *lst) {
	if (lst == NULL) {
		return (NULL);
	}
	while (lst->next != NULL) {
		lst = lst->next;
	}
	return (lst);
}
*/

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*last;

	if (lst == NULL || new == NULL)
	{
		return ;
	}
	if (*lst == NULL)
	{
		*lst = new;
	}
	else
	{
		last = ft_lstlast(*lst);
		last->next = new;
	}
}

// int main() {
//     int a = 5, b = 10, c = 15;
//     t_list *head = ft_lstnew(&a);
//     t_list *second = ft_lstnew(&b);
//     t_list *third = ft_lstnew(&c);

//     // Initially link the first two nodes
//     head->next = second;

//     // Add the third node to the back of the list
//     ft_lstadd_back(&head, third);

//     // Output the list to check 
//     for (t_list *current = head; current != NULL; current = current->next)
//     {
//         printf("Node content: %d\n", *(int *)(current->content));
//     }

//     // Cleanup
//     t_list *temp;
//     while (head != NULL) {
//         temp = head;
//         head = head->next;
//         free(temp);
//     }

//     return (0);
// }
