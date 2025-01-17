#include "./ft_printf.h"
#include "./libft/libft.h"
#include <stdio.h>

int	ft_determinant(const char *format)
{
	int	bytes;

	bytes = 0;
	if (*format == '%')
	{
		ft_putchar_fd('%', 1);
		bytes++;
	}
	return (bytes);
}

int	ft_printf(const char *format, ...)
{
	unsigned int	bytes;

	bytes = 0;
	while (*format)
	{
		if (*format == '%')
		{
			format++;
			bytes += ft_determinant(format++);
			continue ;
		}
		ft_putchar_fd(*format, 1);
		bytes++;
		format++;
	}
	return (bytes);
}

int	main(int argc, char **argv)
{
	(void)argc;
	printf("\nbytes printed: %d", ft_printf(argv[1]));
	return (0);
}
