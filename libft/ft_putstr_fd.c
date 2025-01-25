/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maghumya <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/12 16:00:01 by maghumya          #+#    #+#             */
/*   Updated: 2025/01/12 16:00:02 by maghumya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putstr_fd(char *s, int fd)
{
	write(fd, s, ft_strlen(s));
}
/*
#include <stdio.h>

int	main(int argc, char **argv)
{
	char	*str;

	str = "Hello, World!";
	ft_putstr_fd((argv[1]) ? argv[1] : str, 1);
	return (0);
}
*/
