/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_medium_stack.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moel-asr <moel-asr@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/26 15:55:26 by moel-asr          #+#    #+#             */
/*   Updated: 2023/01/01 07:36:06 by moel-asr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	sort_medium_stack(t_list **lst1, t_list **lst2)
{
	int		i;
	int		len;
	int		small_num;
	t_list	*tmp;

	i = 0;
	len = ft_lstsize(*lst1);
	tmp = *lst1;
	small_num = tmp->content;
	while (i < len - 3)
	{
		tmp = *lst1;
		small_num = tmp->content;
		while (tmp)
		{
			if (tmp->content < small_num)
				small_num = tmp->content;
			tmp = tmp->next;
		}
		find_and_push(lst1, lst2, small_num, 'b');
		i++;
	}
	sort_small_stack(lst1);
	while (i--)
		ft_push(lst1, lst2, 'a');
}
