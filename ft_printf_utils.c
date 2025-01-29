/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_utils.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maghumya <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/18 20:23:58 by maghumya          #+#    #+#             */
/*   Updated: 2025/01/18 20:24:00 by maghumya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

size_t	ft_putchar_c(char c)
{
	ft_putchar_fd(c, 1);
	return (1);
}

size_t	ft_putstr_c(char *str)
{
	ft_putstr_fd(str, 1);
	return (ft_strlen(str));
}

size_t	ft_putnbr_c(int n)
{
	size_t	bytes;
	int		sign;

	bytes = 0;
	if (n < 0)
	{
		bytes += ft_putchar_c('-');
		sign = -1;
	}
	else
		sign = 1;
	if (n >= 10 || n <= -10)
	{
		bytes += ft_putnbr_c(sign * (n / 10));
		bytes += ft_putnbr_c(sign * (n % 10));
	}
	else
		bytes += ft_putchar_c(n * sign + '0');
	return (bytes);
}

size_t	ft_putunit(unsigned int n)
{
	size_t	bytes;

	bytes = 0;
	if (n >= 10)
	{
		bytes += ft_putunit(n / 10);
		bytes += ft_putchar_c((n % 10) + '0');
	}
	else
		bytes += ft_putchar_c(n + '0');
	return (bytes);
}
