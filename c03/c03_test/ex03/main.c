/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seepark <seepark@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/08 11:48:11 by seepark           #+#    #+#             */
/*   Updated: 2021/04/08 13:47:24 by seepark          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strncat(char *dest, char *src, unsigned int nb);

int		main(void)
{
	char str1[] = "Hello";
	char str2[] = "World";
	

	printf("%s\n", ft_strncat(str1, str2, 4));
	return(0); 
}
