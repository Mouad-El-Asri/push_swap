/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap_ab.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moel-asr <moel-asr@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/25 21:16:58 by moel-asr          #+#    #+#             */
/*   Updated: 2022/12/25 21:21:17 by moel-asr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	ft_swap_ab(t_list *lst1, t_list *lst2)
{
	if ((!lst1 || (ft_lstsize(lst1) < 2)) || \
		(!lst2 || (ft_lstsize(lst2) < 2)))
		return ;
	ft_swap(lst1, 'a', 0);
	ft_swap(lst2, 'b', 0);
	ft_putstr_fd("ss\n", 1);
}
