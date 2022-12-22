/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_stack.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moel-asr <moel-asr@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/21 22:48:05 by moel-asr          #+#    #+#             */
/*   Updated: 2022/12/22 00:06:27 by moel-asr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sort_small_stack(t_list **lst)
{
	int	a;
	int	b;
	int	c;

	a = (*lst)->content;
	b = (*lst)->next->content;
	c = (*lst)->next->next->content;
	if (a > b && b < c && c > a)
		ft_swap(*lst, 'a', 1);
	else if (a > b && b > c && c < a)
	{
		ft_swap(*lst, 'a', 1);
		ft_reverse_rotate(lst, 'a', 1);
	}
	else if (a > b && b < c && c < a)
		ft_rotate(lst, 'a', 1);
	else if (a < b && b > c && c > a)
	{
		ft_swap(*lst, 'a', 1);
		ft_rotate(lst, 'a', 1);
	}
	else if (a < b && b > c && c < a)
		ft_reverse_rotate(lst, 'a', 1);
}

// void	sort_medium_stack(t_list **lst1, t_list **lst2)
// {
// 	ft_push(lst2, lst1, 'b');
// 	ft_push(lst2, lst1, 'b');
// 	sort_small_stack(lst1);
// 	ft_push(lst1, lst2, 'a');
// 	sort_small_stack(lst1);
// 	ft_push(lst1, lst2, 'a');
// 	sort_small_stack(lst1);
// }
