/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_errors.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moel-asr <moel-asr@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/19 11:37:46 by moel-asr          #+#    #+#             */
/*   Updated: 2022/12/26 15:58:18 by moel-asr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	print_error(void)
{
	ft_putstr_fd("Error\n", 2);
	exit(EXIT_FAILURE);
}

int	check_stack_a(t_list *lst)
{
	int		i;
	int		j;
	int		rtn;
	int		len;
	t_list	*tmp;

	i = 0;
	rtn = 0;
	len = ft_lstsize(lst);
	while (i++ < len)
	{
		tmp = lst;
		j = i;
		while (j < len)
		{
			if (lst->content == tmp->next->content)
				print_error();
			if (lst->content > tmp->next->content)
				rtn++;
			tmp = tmp->next;
			j++;
		}
		lst = lst->next;
	}
	return (rtn);
}
