/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seepark <seepark@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/03 13:07:34 by seepark           #+#    #+#             */
/*   Updated: 2021/04/03 13:11:12 by seepark          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int     ft_str_is_printable(char *str);

int     main(void)
{
        char *a = "323 ";
        char *b = "VT";
        char *c = "\0";

        printf("%d\n", ft_str_is_printable(a));
        printf("%d\n", ft_str_is_printable(b));
        printf("%d\n", ft_str_is_printable(c));
        return (0);
}
