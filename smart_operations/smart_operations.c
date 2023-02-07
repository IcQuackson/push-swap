/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   smart_operations.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: quackson <quackson@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/06 18:11:35 by quackson          #+#    #+#             */
/*   Updated: 2023/02/07 00:00:31 by quackson         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "smart_operations.h"

#include <stdio.h>

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

void	get_lst_to_bot(t_list *head, int value,
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
	if (i < size / 2)
	{
		while (i-- >= 0)
			r(head);
	}
	else
	{
		while (i++ < size - 1)
			rr(head);
	}
}

int	get_index_of_max_value(t_list *head, int *max_value)
{
	int	i;
	int	max;
	int	max_i;

	if (!head)
		return (-1);
	i = 0;
	max = head->content;
	max_i = 0;
	while (head)
	{
		if (head->content > max)
		{
			max = head->content;
			max_i = i;
		}
		head = head->next;
		i++;
	}
	*max_value = max;
	return (max_i);
}

int	get_index_of_min_value(t_list *head, int *min_value)
{
	int	i;
	int	min;
	int	min_i;

	if (!head)
		return (-1);
	i = 0;
	min = head->content;
	min_i = 0;
	printf("content:%d < min:%d\n", head->content, min);
	while (head)
	{
		if (head->content < min)
		{
			min = head->content;
			min_i = i;
		}
		head = head->next;
		i++;
	}
	*min_value = min;
	return (min_i);
}
