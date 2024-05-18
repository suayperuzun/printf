/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seruzun <suayp.eruzun@gmail.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/03 20:42:03 by seruzun           #+#    #+#             */
/*   Updated: 2024/05/12 15:53:23 by seruzun          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	while (lst != NULL)
	{
		f(lst->content);
		lst = lst->next;
	}
}
/*
void	print_int(void *content)
{
	if (content != NULL)
	{
		printf("%d\n", *(int *)content);
	}
}
*/
// int main() {
//     int a = 42;
//     int b = 84;

//     t_list *head = ft_lstnew(&a);
//     t_list *second = ft_lstnew(&b);
//     head->next = second;

//     ft_lstiter(head, print_int);

//     // Cleanup
//     ft_lstiter(head, free);
//     while (head != NULL)
//     {
//         t_list *tmp = head;
//         head = head->next;
//         free(tmp);
//     }

//     return (0);
// }
