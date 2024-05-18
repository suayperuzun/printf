/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seruzun <suayp.eruzun@gmail.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/03 20:46:46 by seruzun           #+#    #+#             */
/*   Updated: 2024/05/12 16:00:12 by seruzun          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	int	count;

	count = 0;
	while (lst != NULL)
	{
		count++;
		lst = lst->next;
	}
	return (count);
}

// int main()
// {
//     int a = 5, b = 10, c = 15;
//     t_list *head = ft_lstnew(&a);
//     t_list *second = ft_lstnew(&b);
//     t_list *third = ft_lstnew(&c);

//     head->next = second;
//     second->next = third;

//     printf("The list contains %d nodes.\n", ft_lstsize(head));

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
