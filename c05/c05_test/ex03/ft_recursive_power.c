/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seepark <seepark@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/11 23:54:44 by seepark           #+#    #+#             */
/*   Updated: 2021/04/12 00:04:09 by seepark          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_recursive_power(int nb, int power)
{
		if (power < 0)
				return (0);
		if (power == 0)
				return (1);
		return (nb * ft_recursive_power(nb, power - 1));
}
