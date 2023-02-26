/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_100_1.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: quackson <quackson@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/19 14:48:12 by pedgonca          #+#    #+#             */
/*   Updated: 2023/02/26 15:52:41 by quackson         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	sort_between_5_and_100(t_list **head_a, t_list **head_b)
{
	int	min;
	int	max;
	int	hold_first;
	int	hold_second;
	int	chunk;

	max = get_max_value(*head_a);
	min = get_min_value(*head_a);
	chunk = 0;
	while (++chunk <= 5)
	{
		while (get_1st_n_in_chunk(*head_a, min, max, chunk))
		{
			hold_first = get_1st_n_in_chunk(*head_a, min, max, chunk)->content;
			hold_second = get_lst_n_in_chunk(*head_a, min, max, chunk)->content;
			push_element(head_a, head_b, hold_first, hold_second);
		}
	}
	while (*head_b)
	{
		get_lst_to_top(*head_b, get_max_value(*head_b),
			rotate_b, reverse_rotate_b);
		push_a(head_b, head_a);
	}
}

void	push_element(t_list **head_a, t_list **head_b, int h1, int h2)
{
	int	hold_first_moves;
	int	hold_second_moves;

	hold_first_moves = calculate_get_lst_to_top(*head_a, h1);
	hold_second_moves = calculate_get_lst_to_top(*head_a, h2);
	if (hold_first_moves < hold_second_moves)
	{
		get_lst_to_top(*head_a, h1, rotate_a, reverse_rotate_a);
		push_b(head_a, head_b);
	}
	else
	{
		get_lst_to_top(*head_a, h2, rotate_a, reverse_rotate_a);
		push_b(head_a, head_b);
	}
}

t_list	*get_1st_n_in_chunk(t_list *head, int min, int max, int chunk)
{
	while (head)
	{
		if (check_if_n_in_chunk(head->content, min, max, chunk))
			return (head);
		head = head->next;
	}
	return (NULL);
}

t_list	*get_lst_n_in_chunk(t_list *head, int min, int max, int chunk)
{
	t_list	*last;

	last = NULL;
	while (head)
	{
		if (check_if_n_in_chunk(head->content, min, max, chunk))
			last = head;
		head = head->next;
	}
	return (last);
}

int	check_if_n_in_chunk(int n, int min, int max, int chunk_number)
{
	int	chunk_size;
	int	remaining_elements;
	int	current_element;
	int	i;

	chunk_size = (max - min + 1) / 5;
	remaining_elements = (max - min + 1) % 5 + 1;
	current_element = min;
	i = 0;
	while (++i != chunk_number)
		current_element += chunk_size + (remaining_elements > 0);
	if (remaining_elements)
		chunk_size++;
	while (chunk_size--)
	{
		if (n == current_element++)
			return (1);
	}
	return (0);
}

/* void	divide_sequence(int min_val, int max_val)
{
	int sequence_length = max_val - min_val + 1;
	int chunk_size = sequence_length / 5;
	int remaining_elements = sequence_length % 5;
	int current_element = min_val;
	int chunk_length;

	for (int i = 1; i <= 5; i++)
	{
		chunk_length = chunk_size;
		if (remaining_elements > 0)
		{
			chunk_length++;
			remaining_elements--;
		}
		printf("Chunk %d: ", i);
		for (int j = 0; j < chunk_length; j++)
		{
			printf("%d ", current_element);
			current_element++;
		}
		printf("\n");
	}
}
 */