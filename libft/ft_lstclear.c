/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seruzun <suayp.eruzun@gmail.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/03 21:05:28 by seruzun           #+#    #+#             */
/*   Updated: 2024/05/12 16:48:41 by seruzun          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*current;
	t_list	*next;

	if (lst == NULL || *lst == NULL || del == NULL)
	{
		return ;
	}
	current = *lst;
	while (current != NULL)
	{
		next = current->next;
		ft_lstdelone(current, del);
		current = next;
	}
	*lst = NULL;
}

/*
void	free_content(void *content)
{
	free(content);
}
*/
/*
#include <stdio.h>
int	main(void)
{
	int		*a;
	int		*b;
	t_list	*head;
	t_list	*second;

	a = malloc(sizeof(int));
	b = malloc(sizeof(int));
	*a = 42;
	*b = 84;
	head = ft_lstnew(a);
	second = ft_lstnew(b);
	head->next = second; // Link nodes
	ft_lstclear(&head, free_content);
	if (head == NULL)
	{
		printf("List cleared successfully.\n");
	}
	return (0);
}
*/