/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moel-asr <moel-asr@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/19 11:46:18 by moel-asr          #+#    #+#             */
/*   Updated: 2023/01/01 08:42:28 by moel-asr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(int argc, char **argv)
{
	int		i;
	int		j;
	t_list	*head_a;
	t_list	*head_b;
	char	**strs;

	i = 1;
	head_a = NULL;
	head_b = NULL;
	if (argc > 1)
	{
		while (argv[i])
		{
			j = 0;
			strs = ft_split(argv[i], ' ');
			while (strs[j])
				ft_lstadd_back(&head_a, ft_lstnew(ft_atoi(strs[j++]), 0));
			ft_free(strs);
			i++;
		}
	}
	if (check_stack_a(head_a) == 0)
		return (0);
	sort_stacks(&head_a, &head_b);
	return (0);
}
