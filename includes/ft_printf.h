/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gaetan <gaetan@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/19 09:47:29 by gaetan            #+#    #+#             */
/*   Updated: 2023/02/19 09:47:37 by gaetan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H
# include <unistd.h>
# include <stdarg.h>
# include <limits.h>
# include <stdint.h>
# include <stdlib.h>

int				ft_printf(const char *format, ...);
ssize_t			ft_putchar(char c);
ssize_t			ft_putstr(char *str);
ssize_t			ft_putptr(void *ptr);
ssize_t			ft_put_signed_nbr(int nb);
ssize_t			ft_put_unsigned_nbr(unsigned int nb, int base, int upper);
char			ft_hex(int n, int upper);
int				get_nblen(int nb);
unsigned int	get_unblen(unsigned int nb, int base);
ssize_t			ft_write(char *ptr, size_t size);

#endif