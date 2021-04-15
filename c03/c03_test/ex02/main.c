/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seepark <seepark@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/05 14:31:40 by seepark           #+#    #+#             */
/*   Updated: 2021/04/08 21:39:17 by seepark          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

char	*ft_strcat(char *dest, char *src);

int		main(void)
{
		char str1[50] = "Hello";
		char str2[50] = "world";

		printf("%s\n", ft_strcat(str1, str2));
		printf("%s\n", strcat(str1, str2));
		return (0);
}
