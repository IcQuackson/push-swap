/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sorting_operations3.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: quackson <quackson@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/25 18:29:47 by quackson          #+#    #+#             */
/*   Updated: 2023/02/26 15:54:06 by quackson         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int	get_num_of_digits(int n)
{
	int	digits;

	if (n == 0)
		return (1);
	digits = 0;
	while (n != 0)
	{
		n /= 10;
		digits++;
	}
	return (digits);
}

void	sort_more_than_100(t_list **head_a, t_list **head_b, int stack_size)
{
	int	i;
	int	n_bits;

	i = 0;
	n_bits = -1;
	while (check_if_exists_bit_1(*head_a, ++n_bits))
	{
		i = 0;
		while (i++ < stack_size)
		{
			if ((*head_a)->content >> n_bits & 1)
				rotate_a(*head_a);
			else
				push_b(head_a, head_b);
		}
		while (ft_lstsize(*head_b) != 0)
			push_a(head_b, head_a);
	}
}

int	check_if_exists_bit_1(t_list *head, int n_bits)
{
	while (head)
	{
		if (head->content >> n_bits & 1)
			return (1);
		head = head->next;
	}
	return (0);
}

int	get_n_to_last_digit(int num, int n)
{
	int	digit;

	digit = num % 10;
	while (num != 0 && n)
	{
		digit = num % 10;
		num /= 10;
	}
	return (digit);
}

/* void	sort_more_than_5(t_list **head_a, t_list **head_b, int stack_size)
{
	int	min;
	int	max;
	int	*indexes;

	(void) min;

	min = get_min_value(*head_a);
	max = get_max_value(*head_a);
	indexes = get_indexes(*head_a, stack_size);
	
	while (*head_a && ft_lstsize(*head_a) != stack_size / 2 + 1)
	{
		if ((*head_a)->content == max)
			rotate_a(*head_a);
		else if (!check_if_in_1st_half((*head_a)->content, indexes, stack_size))
			push_b(head_a, head_b);
		else
			rotate_a(*head_a);
		//printf("size: %d\n", ft_lstsize(*head_a));
	}
	
	while (ft_lstsize(*head_a) != 1)
	{
		if ((*head_a)->content == max)
			rotate_a(*head_a);
		else
			push_b(head_a, head_b);
	}
	while (*head_b)
	{
		get_lst_to_top(*head_a, get_smallest_bigger_num(*head_a,
				(*head_b)->content), rotate_a, reverse_rotate_a);
		push_a(head_b, head_a);
	}
	get_lst_to_top(*head_a, min, rotate_a, reverse_rotate_a);
	free(indexes);
} */

/* void	sort_more_than_5(t_list **head_a, t_list **head_b, int stack_size)
{
	int	min;
	int	max;
	int	*indexes;

	(void) min;

	min = get_min_value(*head_a);
	max = get_max_value(*head_a);
	indexes = get_indexes(*head_a, stack_size);

	for (int i = 0; i < stack_size; i++)
		printf("%d\n", indexes[i]);

	while (*head_a && ft_lstsize(*head_a) != stack_size / 2 + 1)
	{
		if ((*head_a)->content == max)
			rotate_a(*head_a);
		else if (check_if_in_1st_half((*head_a)->content, indexes, stack_size))
			push_b(head_a, head_b);
		else
			rotate_a(*head_a);
		//printf("size: %d\n", ft_lstsize(*head_a));
	}
	
	while (ft_lstsize(*head_a) != 1)
	{
		if ((*head_a)->content == max)
			rotate_a(*head_a);
		else
			push_b(head_a, head_b);
	}
	while (*head_b)
	{
		get_lst_to_top(*head_a, get_biggest_smaller_num(*head_a,
				(*head_b)->content), rotate_a, reverse_rotate_a);
		push_a(head_b, head_a);
	}
	get_lst_to_top(*head_a, min, rotate_a, reverse_rotate_a);
	free(indexes);
} */



/* int	check_if_in_1st_half(int n, int *indexes, int size)
{
	int	i;

	i = 0;
	while (i < size / 2)
	{
		if (n == indexes[i])
			return (1);
		i++;
	}
	return (0);
}

int	*get_indexes(t_list *head, int size)
{
	int	*indexes;
	int	i;
	int	n;

	indexes = malloc(size * sizeof(int));
	if (!indexes)
		return (NULL);
	n = get_min_value(head);
	i = 0;
	while (i < size)
	{
		indexes[i] = n;
		n = get_smallest_bigger_num(head, n);
		i++;
	}
	return (indexes);
}

int	get_biggest_smaller_num(t_list *head_a, int n)
{
	int		min;
	int		i;
	t_list	*ptr;

	min = get_min_value(head_a);
	if (n == min)
		return (n);
	i = n;
	ptr = head_a;
	while (--i >= min)
	{
		while (ptr)
		{
			if (ptr->content == i)
				return (i);
			ptr = ptr->next;
		}
		ptr = head_a;
	}
	return (n);
}

int	get_smallest_bigger_num(t_list *head_a, int n)
{
	int		max;
	int		i;
	t_list	*ptr;

	max = get_max_value(head_a);
	if (n == max)
		return (n);
	i = n;
	ptr = head_a;
	while (++i <= max)
	{
		while (ptr)
		{
			if (ptr->content == i)
				return (i);
			ptr = ptr->next;
		}
		ptr = head_a;
	}
	return (n);
} */