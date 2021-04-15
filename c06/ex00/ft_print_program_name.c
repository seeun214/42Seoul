/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_program_name.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seepark <seepark@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/06 10:48:55 by seepark           #+#    #+#             */
/*   Updated: 2021/04/13 18:30:49 by seepark          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		main(int argc, char *argv[])
{
	argc = 0;
	while (*argv[argc])
		write(1, argv[argc]++, 1);
	write(1, "\n", 1);
	return (0);
}
