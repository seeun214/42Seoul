/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seepark <seepark@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/05 13:21:30 by seepark           #+#    #+#             */
/*   Updated: 2021/04/08 10:48:59 by seepark          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

int		ft_strcmp(char *s1, char *s2);

int		main(void)
{
		char *str1;
		char *str2;

		str1 = "apple";
		str2 = "appleo";
		printf("%d\n", ft_strcmp(str1, str2));
		printf("%d\n", strcmp(str1, str2));
		return (0);
}
