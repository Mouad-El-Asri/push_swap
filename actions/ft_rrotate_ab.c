/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rrotate_ab.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moel-asr <moel-asr@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/25 21:19:05 by moel-asr          #+#    #+#             */
/*   Updated: 2022/12/25 21:27:17 by moel-asr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	ft_rrotate_ab(t_list **lst1, t_list **lst2)
{
	if ((!*lst1 || (ft_lstsize(*lst1) < 2)) || \
		(!*lst2 || (ft_lstsize(*lst2) < 2)))
		return ;
	ft_rrotate(lst1, 'a', 0);
	ft_rrotate(lst2, 'b', 0);
	ft_putstr_fd("rrr\n", 1);
}
