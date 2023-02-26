/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: quackson <quackson@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/01 19:21:23 by pedgonca          #+#    #+#             */
/*   Updated: 2023/02/26 16:28:30 by quackson         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	print_stacks(t_list *head_a, t_list *head_b)
{
	while (head_a != NULL || head_b != NULL)
	{
		if (head_a != NULL)
		{
			ft_putnbr(head_a->content);
			write(1, " ", 1);
			head_a = head_a->next;
		}
		else
			write(1, "  ", 2);
		if (head_b != NULL)
		{
			ft_putnbr(head_b->content);
			head_b = head_b->next;
		}
		write(1, "\n", 1);
	}
	write(1, "- -\na b\n", 8);
}

t_list	**add_new_node(char *n, t_list **head)
{
	t_list	*new_node;

	new_node = malloc(sizeof(t_list));
	if (!new_node)
		return (NULL);
	new_node->content = (int) ft_atol((const char *) n);
	new_node->next = NULL;
	ft_lstadd_back(head, new_node);
	return (head);
}

void	free_stack(t_list *head)
{
	t_list	*temp;

	while (head)
	{
		temp = head->next;
		free(head);
		head = temp;
	}
}
