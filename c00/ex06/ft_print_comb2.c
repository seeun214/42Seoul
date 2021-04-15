/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seepark <seepark@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/31 12:15:40 by seepark           #+#    #+#             */
/*   Updated: 2021/03/31 22:57:46 by seepark          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_write_comb2(int a, int b)
{
	ft_putchar('0' + a / 10);
	ft_putchar('0' + a % 10);
	ft_putchar(' ');
	ft_putchar('0' + b / 10);
	ft_putchar('0' + b % 10);
	ft_putchar(',');
	ft_putchar(' ');
}

void	ft_print_comb2(void)
{
	int a;
	int b;

	a = 0;
	while (a <= 97)
	{
		b = a + 1;
		while (b <= 99)
		{
			ft_write_comb2(a, b);
			b++;
		}
		a++;
	}
	write(1, "98 99", 5);
}
