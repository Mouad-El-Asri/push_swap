/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init_t_chunks.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moel-asr <moel-asr@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/26 15:56:46 by moel-asr          #+#    #+#             */
/*   Updated: 2022/12/26 15:58:40 by moel-asr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	init_t_chunks(t_chunks *var, t_list *lst, int div)
{
	int	len;

	len = ft_lstsize(lst);
	var->max = len / div;
	var->min = 0;
}
