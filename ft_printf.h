/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maghumya <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/17 14:36:33 by maghumya          #+#    #+#             */
/*   Updated: 2025/01/17 14:38:53 by maghumya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include "./libft/libft.h"
# include <stdarg.h>

int		ft_printf(const char *format, ...);
size_t	ft_putchar_c(char c);
size_t	ft_putstr_c(char *str);
size_t	ft_putnbr_c(int n);
size_t	ft_putunit(unsigned int n);
size_t	ft_puthex(unsigned long long n, int upper);
size_t	ft_putptr(unsigned long long n);

#endif
