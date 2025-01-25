/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maghumya <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/12 16:00:40 by maghumya          #+#    #+#             */
/*   Updated: 2025/01/12 16:14:04 by maghumya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlen(const char *s)
{
	size_t	i;

	i = 0;
	while (s[i])
		i++;
	return (i);
}
/*
#include <stdio.h>

int	main(int argc, char **argv)
{
	char	*str;
	size_t	res;

	if (argc == 2)
		str = argv[1];
	else
		str = "Hello, world!";
	res = ft_strlen(str);
	printf("ft_strlen: %zu\n", res);
	return (0);
}
*/