/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_stacks.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moel-asr <moel-asr@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/25 23:35:39 by moel-asr          #+#    #+#             */
/*   Updated: 2022/12/28 03:34:35 by moel-asr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	sort_stacks(t_list **lst1, t_list **lst2)
{
	int		len;
	int		*arr;

	len = ft_lstsize(*lst1);
	arr = put_stack_to_arr(*lst1);
	sort_int_tab(arr, len);
	put_index_to_stack(*lst1, arr);
	if (len == 2)
		ft_swap(*lst1, 'a', 1);
	else if (len <= 3)
		sort_small_stack(lst1);
	else if (len > 3 && len <= 6)
		sort_medium_stack(lst1, lst2);
	else if (len > 6 && len < 500)
	{
		sort_big_stack(lst1, lst2, 5);
		sort_big_stack2(lst1, lst2);
	}
	else
	{
		sort_big_stack(lst1, lst2, 12);
		sort_big_stack2(lst1, lst2);
	}
}
