/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_errors.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moel-asr <moel-asr@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/19 11:37:46 by moel-asr          #+#    #+#             */
/*   Updated: 2022/12/21 20:18:33 by moel-asr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	print_error(void)
{
	ft_putstr("Error\n");
	exit(EXIT_FAILURE);
}

// void	check_errors(char **argv)
// {
// 	int	i;
// 	int	j;

// 	i = 1;
// 	while (argv[i])
// 	{
// 		j = i + 1;
// 		while (argv[j])
// 		{
// 			if (ft_strcmp(argv[i], argv[j]) == 0)
// 				print_error();
// 			j++;
// 		}
// 		i++;
// 	}
// }

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
