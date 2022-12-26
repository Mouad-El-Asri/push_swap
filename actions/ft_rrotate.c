/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rrotate.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moel-asr <moel-asr@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/25 21:18:46 by moel-asr          #+#    #+#             */
/*   Updated: 2022/12/25 21:23:04 by moel-asr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	ft_rrotate(t_list **lst, char c, int banner)
{
	t_list	*tmp;
	t_list	*last_node;

	if (!*lst || (ft_lstsize(*lst) < 2))
		return ;
	last_node = ft_lstlast(*lst);
	ft_lstadd_front(lst, ft_lstnew(last_node->content));
	tmp = *lst;
	while (tmp->next->next)
		tmp = tmp->next;
	tmp->next = NULL;
	free(last_node);
	if (banner)
	{
		if (c == 'a')
			ft_putstr_fd("rra\n", 1);
		else
			ft_putstr_fd("rrb\n", 1);
	}
}
