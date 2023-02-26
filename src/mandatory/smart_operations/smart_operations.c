/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   smart_operations.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: quackson <quackson@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/06 18:11:35 by quackson          #+#    #+#             */
/*   Updated: 2023/02/26 15:15:37 by quackson         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int	calculate_get_lst_to_top(t_list *head, int value)
{
	int		i;
	int		size;

	size = ft_lstsize(head);
	if (size <= 0)
		return (-1);
	i = 0;
	if (!get_node_by_value(head, value, &i))
		return (-1);
	if (i <= size / 2)
		return (i);
	else
		return (size - i);
}

t_list	*get_node_by_value(t_list *head, int value, int *index)
{
	int	i;

	i = 0;
	while (head)
	{
		if (head->content == value)
			return (head);
		head = head->next;
		i++;
		*index = i;
	}
	return (NULL);
}

void	get_lst_to_top(t_list *head, int value,
void (*r)(t_list*), void (*rr)(t_list*))
{
	int		i;
	int		size;

	size = ft_lstsize(head);
	if (size <= 0)
		return ;
	i = 0;
	if (!get_node_by_value(head, value, &i))
		return ;
	if (i == size)
		return ;
	if (i <= size / 2)
	{
		while (i--)
			r(head);
	}
	else
	{
		while (i++ < size)
			rr(head);
	}
}

int	get_max_value(t_list *head)
{
	int	max;

	max = head->content;
	while (head)
	{
		if (head->content > max)
			max = head->content;
		head = head->next;
	}
	return (max);
}

int	get_min_value(t_list *head)
{
	int	i;
	int	min;

	min = head->content;
	while (head)
	{
		if (head->content < min)
			min = head->content;
		head = head->next;
		i++;
	}
	return (min);
}
