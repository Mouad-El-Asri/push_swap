/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_push.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moel-asr <moel-asr@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/25 21:16:56 by moel-asr          #+#    #+#             */
/*   Updated: 2022/12/28 03:15:17 by moel-asr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	ft_push(t_list **lst1, t_list **lst2, char c)
{
	t_list	*tmp;

	if (!*lst2)
		return ;
	ft_lstadd_front(lst1, ft_lstnew((*lst2)->content, (*lst2)->index));
	tmp = *lst2;
	*lst2 = (*lst2)->next;
	free(tmp);
	if (c == 'a')
		ft_putstr_fd("pa\n", 1);
	else
		ft_putstr_fd("pb\n", 1);
}
