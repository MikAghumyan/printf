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

int		ft_printf(const char *, ...);
size_t	ft_putchar_c(char);
size_t	ft_putstr_c(char *);
size_t	ft_putnbr_c(int);
size_t	ft_putunit(unsigned int);

#endif
