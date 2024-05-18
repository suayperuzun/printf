/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seruzun <suayp.eruzun@gmail.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/03 21:11:27 by seruzun           #+#    #+#             */
/*   Updated: 2024/05/12 15:58:19 by seruzun          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new_list;
	t_list	*new_elem;
	void	*new_content;

	new_list = NULL;
	while (lst)
	{
		new_content = f(lst->content);
		if (!new_content)
		{
			ft_lstclear(&new_list, del);
			return (NULL);
		}
		new_elem = ft_lstnew(new_content);
		if (!new_elem)
		{
			del(new_content);
			ft_lstclear(&new_list, del);
			return (NULL);
		}
		ft_lstadd_back(&new_list, new_elem);
		lst = lst->next;
	}
	return (new_list);
}

/*
// Example functions
void	*increment_int(void *content)
{
	int	*new_int;

	new_int = malloc(sizeof(int));
	if (new_int)
	{
		*new_int = *(int *)content + 1;
	}
	return (new_int);
}
*/
/*
void	free_int(void *content)
{
	free(content);
}
*/
// int main()
// {
//
//     int values[] = {1, 2, 3, 4};
//     t_list *list = NULL, *result = NULL;
//     for (int i = 0; i < 4; i++)
//     {
//         ft_lstadd_back(&list, ft_lstnew(&values[i]));
//     }

//     result = ft_lstmap(list, increment_int, free_int);

//     t_list *current = result;
//     while (current)
//     {
//         printf("%d ", *(int *)current->content);
//         current = current->next;
//     }
//     ft_lstclear(&result, free_int);
//     ft_lstclear(&list, NULL);

//     return (0);
// }
