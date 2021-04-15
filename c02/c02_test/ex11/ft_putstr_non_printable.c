/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seepark <seepark@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/03 16:01:01 by seepark           #+#    #+#             */
/*   Updated: 2021/04/07 01:28:06 by seepark          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char	check_printable(char c)
{
	if (c >= ' ' && c <= '~')
		return (1);
	return (0);
}

void	write_to_hex(char c)
{
	if (c <= 9)
		c = c + '0';
	if (c >= 10 && c <= 15)
		c = c + 'a' - 10;
	write(1, &c, 1);
}

void	ft_putstr_non_printable(char *str)
{
	while (*str)
	{
		if (check_printable(*str))
		{
			write(1, str, 1);
		}
		else
		{
			write(1, "\\", 1);
			write_to_hex((unsigned char)*str / 16);
			write_to_hex((unsigned char)*str % 16);
		}
		str++;
	}
}
