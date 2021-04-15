/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seepark <seepark@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/01 14:22:10 by seepark           #+#    #+#             */
/*   Updated: 2021/04/01 19:30:28 by seepark          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int g_len;
char g_buf[10];

void	ft_print_body(int fin, int m)
{
	int i;

	if (m == g_len)
	{
		write(1, g_buf, g_len);
		write(1, ", ", 2);
		return ;
	}
	if (fin == 9)
		return ;
	i = fin;
	while (++i <= 10 - g_len + m)
	{
		g_buf[m] = '0' + i;
		ft_print_body(i, m + 1);
	}
}

void	ft_print_last(int i)
{
	char c;

	while (i <= 9)
	{
		c = '0' + i++;
		write(1, &c, 1);
	}
}

void	ft_print_combn(int n)
{
	int i;

	i = 0;
	g_len = n;
	while (i < 10 - n)
	{
		g_buf[0] = '0' + i;
		ft_print_body(i++, 1);
	}
	ft_print_last(i);
}
