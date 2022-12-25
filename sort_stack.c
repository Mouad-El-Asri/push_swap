/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_stack.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moel-asr <moel-asr@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/21 22:48:05 by moel-asr          #+#    #+#             */
/*   Updated: 2022/12/25 02:23:58 by moel-asr         ###   ########.fr       */
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

int	*put_stack_to_arr(t_list *lst)
{
	int		*arr;
	int		i;

	i = 0;
	arr = malloc(sizeof(int) * ft_lstsize(lst));
	while (lst)
	{
		arr[i] = lst->content;
		lst = lst->next;
		i++;
	}
	return (arr);
}

void	ft_sort_int_tab(int *tab, int size)
{
	int	i;
	int	j;
	int	c;

	i = 0;
	c = 0;
	while (i < size)
	{
		j = i + 1;
		while (j < size)
		{
			if (tab[i] > tab[j])
			{
				c = tab[i];
				tab[i] = tab[j];
				tab [j] = c;
			}
			j++;
		}
		i++;
	}
}

void	put_index_to_stack(t_list *lst, int *arr)
{
	int		i;
	int		j;
	t_list	*tmp;

	i = 0;
	while (i < ft_lstsize(lst))
	{
		j = 0;
		tmp = lst;
		while (j < ft_lstsize(lst))
		{
			if (arr[i] == tmp->content)
			{
				tmp->content = i;
				break ;
			}
			tmp = tmp->next;
			j++;
		}
		i++;
	}
}

int	find_index(t_list *lst, int num)
{
	int		count;

	count = 0;
	while (lst)
	{
		count++;
		if (lst->content == num)
			break ;
		lst = lst->next;
	}
	return (count);
}

void	init_t_chunks(t_chunks *var, t_list *lst, int div)
{
	int	len;

	len = ft_lstsize(lst);
	var->max = len / div;
	var->min = 0;
}

void	sort_big_stack(t_list **lst1, t_list **lst2)
{
	int			i;
	int			tmp_max;
	int			divisor;
	int			count;
	t_list		*tmp;
	t_chunks	var;

	i = 0;
	divisor = 12;
	init_t_chunks(&var, *lst1, divisor);
	tmp_max = var.max;
	while (i <= divisor)
	{
		tmp = *lst1;
		while (tmp)
		{
			if ((tmp->content >= var.min) && (tmp->content) < var.max)
			{
				count = find_index(*lst1, tmp->content);
				if (count < (ft_lstsize(*lst1) / 2))
				{
					while (count > 1)
					{
						ft_rotate(lst1, 'a', 1);
						count--;
					}
				}
				else if (count >= (ft_lstsize(*lst1) / 2))
				{
					while (count <= ft_lstsize(*lst1))
					{
						ft_reverse_rotate(lst1, 'a', 1);
						count++;
					}
				}
				ft_push(lst2, lst1, 'b');
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
	int		count;
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
		count = find_index(*lst2, big_number);
		if (count < (ft_lstsize(*lst2) / 2))
		{
			while (count > 1)
			{
				ft_rotate(lst2, 'b', 1);
				count--;
			}
		}
		else if (count >= (ft_lstsize(*lst2) / 2))
		{
			while (count <= ft_lstsize(*lst2))
			{
				ft_reverse_rotate(lst2, 'b', 1);
				count++;
			}
		}
		ft_push(lst1, lst2, 'a');
		i++;
	}
}

void	sort_medium_stack(t_list **lst1, t_list **lst2)
{
	int		i;
	int		len;
	int		small_num;
	int		count;
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
		printf("|| %d ||\n", small_num);
		count = find_index(*lst1, small_num);
		if (count < (ft_lstsize(*lst1) / 2))
		{
			while (count > 1)
			{
				ft_rotate(lst1, 'a', 1);
				count--;
			}
		}
		else if (count >= (ft_lstsize(*lst1) / 2))
		{
			while (count <= ft_lstsize(*lst1))
			{
				ft_reverse_rotate(lst1, 'a', 1);
				count++;
			}
		}
		ft_push(lst2, lst1, 'b');
		i++;
	}
	sort_small_stack(lst1);
	while (i--)
		ft_push(lst1, lst2, 'a');
}

void	sort_stacks(t_list **lst1, t_list **lst2)
{
	if (ft_lstsize(*lst1) == 2)
		ft_swap(*lst1, 'a', 1);
	else if (ft_lstsize(*lst1) <= 3)
		sort_small_stack(lst1);
	else if (ft_lstsize(*lst1) > 3 && ft_lstsize(*lst1) <= 6)
		sort_medium_stack(lst1, lst2);
}
