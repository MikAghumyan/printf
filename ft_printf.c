/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maghumya <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/18 20:26:00 by maghumya          #+#    #+#             */
/*   Updated: 2025/01/18 20:35:37 by maghumya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./ft_printf.h"

static size_t	ft_determinant(const char *format, va_list args)
{
	size_t	bytes;

	bytes = 0;
	if (*format == '%')
		bytes += ft_putchar_c('%');
	else if (*format == 's')
		bytes += ft_putstr_c(va_arg(args, char *));
	else if (*format == 'c')
		bytes += ft_putchar_c(va_arg(args, int));
	else if (*format == 'd' || *format == 'i')
		bytes += ft_putnbr_c(va_arg(args, int));
	else if (*format == 'u')
		bytes += ft_putunit(va_arg(args, unsigned int));
	else if (*format == 'x' || *format == 'X')
		bytes += ft_puthex(va_arg(args, unsigned int), *format == 'X');
	else if (*format == 'p')
		bytes += ft_putptr(va_arg(args, unsigned long long));
	return (bytes);
}

int	ft_printf(const char *format, ...)
{
	size_t	bytes;
	va_list	args;

	va_start(args, format);
	bytes = 0;
	while (*format)
	{
		if (*format == '%')
		{
			format++;
			bytes += ft_determinant(format++, args);
			continue ;
		}
		ft_putchar_fd(*format, 1);
		bytes++;
		format++;
	}
	va_end(args);
	return (bytes);
}
/*
#include <limits.h>
#include <stdio.h>

int	main(int argc, char **argv)
{
	char	*str;
	int		ft_printf_count;
	int		printf_count;
	int		n;

	(void)argc;
	if (argc == 2)
		str = argv[1];
	else
		str = "hello world";
	printf("ft_printf:\n");
	n = 42;
	ft_printf_count = ft_printf("Hello, %s!\n %% %c %d %i %u %x %X %p %p %x",
			str, 'A', n, -n, UINT_MAX, INT_MIN, INT_MAX, &n, 0, 0);
	printf("\nft_printf_count: %d\n", ft_printf_count);
	printf("\nprintf:\n");
	printf_count = printf("Hello, %s!\n %% %c %d %i %u %x %X %p %p %x", str,
			'A', n, -n, UINT_MAX, INT_MIN, INT_MAX, &n, 0, 0);
	printf("\nprintf_count: %d\n", printf_count);
	printf("\n %d %d", ft_printf("%d", INT_MIN), printf("%d", INT_MIN));
	return (0);
}
*/