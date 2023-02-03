/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   argv_checkers.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pedgonca <pedgonca@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/02 13:40:17 by pedgonca          #+#    #+#             */
/*   Updated: 2023/02/03 14:53:37 by pedgonca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "operations.h"
#include <limits.h>

#include <stdio.h>

int	check_if_int_duplicate(int argc, char **argv)
{
	int		i;
	int		*values;
	long	content;
	int		is_duplicate;

	values = malloc((argc - 1) * sizeof(int));
	if (!values)
		return (0);
	i = 1;
	while (i < argc)
	{
		content = ft_atol((const char *) argv[i]);
		if (content == LONG_MAX)
		{
			write(2, "Error\n", 6);
			return (0);
		}
		if (content > INT_MAX)
		{
			printf("content > INT_MAX\n");
			return (0);
		}
		values[i - 1] = (int) content;
		i++;
	}
	printf("Still here\n");
	is_duplicate = check_if_duplicate(argc - 1, values);
	printf("is_duplicate = %d\n", is_duplicate);
	return (is_duplicate);
}

int	check_if_duplicate(int n, int *values)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (i < n)
	{
		j = i + 1;
		while (j < n)
		{
			if (values[i] == values[j])
				return (0);
			j++;
		}
		i++;
	}
	return (1);
}
