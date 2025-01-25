/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthex.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maghumya <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/18 16:46:22 by maghumya          #+#    #+#             */
/*   Updated: 2025/01/18 18:33:38 by maghumya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

size_t	ft_puthex(unsigned long long n, int upper)
{
	size_t	bytes;
	char	*base;

	if (upper)
		base = "0123456789ABCDEF";
	else
		base = "0123456789abcdef";
	if (ft_strlen(base) != 16)
		return (0);
	bytes = 0;
	if (n >= 16)
	{
		bytes += ft_puthex(n / 16, upper);
		bytes += ft_putchar_c(base[n % 16]);
	}
	else
		bytes += ft_putchar_c(base[n]);
	return (bytes);
}

size_t	ft_putptr(unsigned long long n)
{
	size_t	bytes;

	bytes = 0;
	if (!n)
	{
		bytes += ft_putstr_c("(nil)");
		return (bytes);
	}
	bytes += ft_putstr_c("0x");
	bytes += ft_puthex(n, 0);
	return (bytes);
}
