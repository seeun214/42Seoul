/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seepark <seepark@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/31 02:40:34 by seepark           #+#    #+#             */
/*   Updated: 2021/03/31 12:15:23 by seepark          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_comb(void)
{
	char comb[5];

	comb[0] = '0' - 1;
	comb[3] = ',';
	comb[4] = ' ';
	while (++comb[0] <= '6')
	{
		comb[1] = comb[0];
		while (++comb[1] <= '8')
		{
			comb[2] = comb[1];
			while (++comb[2] <= '9')
			{
				write(1, comb, 5);
			}
		}
	}
	write(1, "789", 3);
}
