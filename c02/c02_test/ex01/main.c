/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seepark <seepark@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/03 10:59:15 by seepark           #+#    #+#             */
/*   Updated: 2021/04/03 11:04:07 by seepark          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strncpy(char *dest, char *src, unsigned int n);

int		main(void)
{
	char *src;
	char dest[20];

	src = "Hello World";
	ft_strncpy(dest, src, 20);
	printf("%s\n", dest);
	return (0);
}
