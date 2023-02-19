/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gaetan <gaetan@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/19 09:36:20 by gaetan            #+#    #+#             */
/*   Updated: 2023/02/19 09:48:14 by gaetan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static size_t	ft_strlen(char *str)
{
	size_t	c;

	c = 0;
	while (str[c])
		c++;
	return (c);
}

ssize_t	ft_putstr(char *str)
{
	size_t	c;

	if (!str)
	{
		write(1, "(null)", 6);
		return (6);
	}
	c = ft_strlen(str);
	return (ft_write(str, c));
}
