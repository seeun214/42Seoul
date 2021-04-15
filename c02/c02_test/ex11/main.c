/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seepark <seepark@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/06 22:31:57 by seepark           #+#    #+#             */
/*   Updated: 2021/04/06 22:49:46 by seepark          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_putstr_non_printable(char *str);

int		main(void)
{
	char a[100] = "Coucou\ntu vas bien ?";
	printf("%s\n", ft_putstr_non_printable(a));
	return (0);
}
