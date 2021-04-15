/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seepark <seepark@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */

/*   Created: 2021/04/03 12:38:45 by seepark           #+#    #+#             */
/*   Updated: 2021/04/03 12:38:45 by seepark          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int		ft_str_is_lowercase(char *str);

int		main(void)
{
		char *a = "apple";
		char *b = "sldjlQ";
		char *c = "\0";

		printf("%d\n", ft_str_is_lowercase(a));
		printf("%d\n", ft_str_is_lowercase(b));
		printf("%d\n", ft_str_is_lowercase(c));
		return (0);
}
