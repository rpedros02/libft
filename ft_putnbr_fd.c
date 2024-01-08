/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rucorrei <rucorrei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/07 22:56:13 by rucorrei          #+#    #+#             */
/*   Updated: 2024/01/07 22:58:05 by rucorrei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	if (n < 0)
	{
		ft_putchar_fd(fd, '-');
		n = -n;
	}
	if (n >= 10)
	{
		ft_putnbr_fd(fd, n / 10);
		ft_putnbr_fd(fd, n % 10);
	}
	else
		ft_putchar_fd(fd, n + '0');
}
