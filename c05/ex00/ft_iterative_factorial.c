/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seepark <seepark@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/11 23:11:11 by seepark           #+#    #+#             */
/*   Updated: 2021/04/14 00:00:06 by seepark          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_iterative_factorial(int nb)
{
	long long fac;

	if (nb < 0)
		return (0);
	if (nb == 0)
		return (1);
	fac = 1;
	while (nb)
	{
		fac *= nb;
		nb--;
	}
	return (fac);
}
