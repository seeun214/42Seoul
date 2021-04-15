/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seepark <seepark@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/02 23:21:00 by seepark           #+#    #+#             */
/*   Updated: 2021/04/06 13:47:33 by seepark          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
char	*ft_strcpy(char *dest, char *src);

int		main(void)
{
	char *src;
	char dest[12];
	src = "Hello World";
	ft_strcpy(dest, src);
	printf("%s\n", dest);
}
