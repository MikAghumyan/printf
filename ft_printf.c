#include "./ft_printf.h"
#include <stdio.h>

size_t	ft_determinant(const char *format, va_list args)
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

int	main(int argc, char **argv)
{
	char	*str;

	(void)argc;
	if (argc == 2)
		str = argv[1];
	else
		str = "hello world";
	printf("\nbytes printed: %d", ft_printf("%s %s %c %% %d %i %u", str,
			"BLABLA", 'A', 42, -42, 42));
	return (0);
}
