/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seepark <seepark@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/06 15:12:21 by seepark           #+#    #+#             */
/*   Updated: 2021/04/07 02:21:12 by seepark          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strcapitalize(char *str);

int		main(void)
{
	char a[100] = "Salut, Comment tu vas ? 42mots quarante-deux; cinquante+et+un";	
	printf("%s\n", ft_strcapitalize(a));
	return (0);
}
