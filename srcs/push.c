/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkrasnos <bkrasnos@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/02 17:26:37 by bkrasnos          #+#    #+#             */
/*   Updated: 2022/06/02 17:31:34 by bkrasnos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	pa(t_list **list_a, t_list **list_b, int p)
{
	t_list	*tmp;

	if (!(*list_b))
		return ;
	tmp = *list_b;
	*list_b = (*list_b)->next;
	tmp->next = *list_a;
	*list_a = tmp;
	if (p == 1)
		write(1, "pa\n", 3);
	if (p == 2)
	{
		ft_putstr("\x1b[36mExecute pa:\n\n");
		visualizer(*list_a, *list_b);
	}
}

void	pb(t_list **list_a, t_list **list_b, int p)
{
	t_list	*tmp;

	if (!(*list_a))
		return ;
	tmp = *list_a;
	*list_a = (*list_a)->next;
	tmp->next = *list_b;
	*list_b = tmp;
	if (p == 1)
		write(1, "pb\n", 3);
	if (p == 2)
	{
		ft_putstr("\x1b[36mExecute pb:\n\n");
		visualizer(*list_a, *list_b);
	}
}