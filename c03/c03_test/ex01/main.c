/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seepark <seepark@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/05 14:07:24 by seepark           #+#    #+#             */
/*   Updated: 2021/04/08 20:47:17 by seepark          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

int		ft_strncmp(char *s1, char *s2, unsigned int n);

int		main(void)
{
		char str1[] = "apple";
		char str2[] = "app21";

		printf("%d\n", ft_strncmp(str1, str2, 3));
	 	printf("%d\n", strncmp(str1, str2, 3));
		return (0);
}

