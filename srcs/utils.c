/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gaetan <gaetan@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/19 09:36:23 by gaetan            #+#    #+#             */
/*   Updated: 2023/02/19 09:48:11 by gaetan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

char	ft_hex(int n, int upper)
{
	if (n < 10)
		return (n + '0');
	return ((n - 10) + 'a' - (upper * 32));
}

int	get_nblen(int nb)
{
	int	c;

	c = 0;
	if (nb == 0)
		return (1);
	if (nb < 0)
		c++;
	while (nb)
	{
		c++;
		nb /= 10;
	}
	return (c);
}

unsigned int	get_unblen(unsigned int nb, int base)
{
	int	c;

	c = 0;
	if (nb == 0)
		return (1);
	while (nb)
	{
		c++;
		nb /= base;
	}
	return (c);
}

ssize_t	ft_write(char *ptr, size_t size)
{
	ssize_t	wrote;

	wrote = write(1, ptr, size);
	if (wrote == -1 || (size_t)wrote != size)
		return (-1);
	return (wrote);
}
