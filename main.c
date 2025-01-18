/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maghumya <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/18 20:35:59 by maghumya          #+#    #+#             */
/*   Updated: 2025/01/18 20:36:01 by maghumya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <stdio.h>

int	main(void)
{
	int	ft_printf_count;
	int	printf_count;
	int	n;

	n = 42;
	ft_printf_count = ft_printf("ft_printf: %d\n", n);
	printf_count = printf("printf: %d\n", n);
	printf("ft_printf_count: %d\n", ft_printf_count);
	printf("printf_count: %d\n", printf_count);
	return (0);
}
