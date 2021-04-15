/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seepark <seepark@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/31 13:40:52 by seepark           #+#    #+#             */
/*   Updated: 2021/03/31 14:02:58 by seepark          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_rev_int_tab(int *tab, int size)
{
	int temp;
	int index;

	index = 0;
	while (index < size / 2)
	{
		temp = tab[index];
		tab[index] = tab[size - index - 1];
		tab[size - index - 1] = temp;
		index++;
	}
}
