/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seepark <seepark@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/03 11:37:11 by seepark           #+#    #+#             */
/*   Updated: 2021/04/06 14:04:14 by seepark          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int		ft_str_is_alpha(char *str);

int		main(void)
{
	char *a = "Hello";
	char *b = "He30";
	char *c = "\0";

		printf("%d\n", ft_str_is_alpha(a));
		printf("%d\n", ft_str_is_alpha(b));
		printf("%d\n", ft_str_is_alpha(c));
}
