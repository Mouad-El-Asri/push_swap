/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_big_stack.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moel-asr <moel-asr@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/21 22:48:05 by moel-asr          #+#    #+#             */
/*   Updated: 2022/12/26 18:13:37 by moel-asr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	sort_big_stack(t_list **lst1, t_list **lst2, int divisor)
{
	int			i;
	int			tmp_max;
	t_list		*tmp;
	t_chunks	var;

	i = 0;
	init_t_chunks(&var, *lst1, divisor);
	tmp_max = var.max;
	while (i <= divisor)
	{
		tmp = *lst1;
		while (tmp)
		{
			if ((tmp->content >= var.min) && (tmp->content) < var.max)
			{
				find_and_push(lst1, lst2, tmp->content, 'b');
				tmp = *lst1;
			}
			else
				tmp = tmp->next;
		}
		var.min += tmp_max;
		var.max += tmp_max;
		i++;
	}
}

void	sort_big_stack2(t_list **lst1, t_list **lst2)
{
	int		len;
	int		i;
	int		big_number;
	t_list	*tmp;

	i = 0;
	len = ft_lstsize(*lst2);
	while (i < len)
	{
		big_number = (*lst2)->content;
		tmp = *lst2;
		while (tmp)
		{
			if (tmp->content > big_number)
				big_number = tmp->content;
			tmp = tmp->next;
		}
		find_and_push(lst2, lst1, big_number, 'a');
		i++;
	}
}
