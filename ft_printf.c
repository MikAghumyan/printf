#include "./ft_printf.h"
#include <stdio.h>

int	ft_determinant(const char *format, va_list args)
{
	int	bytes;
	char *str;

	bytes = 0;
	if (*format == '%')
	{
		ft_putchar_fd('%', 1);
		bytes++;
	}
	else if (*format == 's') {
		str = va_arg(args, char *);
		ft_putstr_fd(str,1);
		bytes += ft_strlen(str);
	}
	return (bytes);
}

int	ft_printf(const char *format, ...)
{
	unsigned int	bytes;
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
	(void)argc;
	char *str = "hello world";
	printf("\nbytes printed: %d", ft_printf(argv[1], str));
	return (0);
}
