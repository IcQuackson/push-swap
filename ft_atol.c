/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atol.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pedgonca <pedgonca@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/26 16:28:25 by pedgonca          #+#    #+#             */
/*   Updated: 2023/02/03 14:53:03 by pedgonca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <limits.h>

long	ft_atol(const char *nptr)
{
	long	n;
	int		sign;

	n = 0;
	sign = 1;
	while ((*nptr >= 9 && *nptr <= 13) || *nptr == ' ')
		nptr++;
	if (!(*nptr == '-' || *nptr == '+' || (*nptr >= '0' && *nptr <= '9')))
		return (LONG_MAX);
	if (*nptr == '-' || *nptr == '+')
	{
		if (*nptr == '-')
			sign = -1;
		nptr++;
	}
	while (*nptr >= '0' && *nptr <= '9')
	{
		n *= 10;
		n += *nptr - '0';
		nptr++;
	}
	return (n * sign);
}
