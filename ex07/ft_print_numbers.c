/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bruteflow <bruteflow@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/31 12:29:11 by bruteflow         #+#    #+#             */
/*   Updated: 2019/03/31 12:30:13 by bruteflow        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void		ft_putchar(char c);

void		ft_print_numbers(void)
{
	short	i;

	i = 48;
	while (i <= 57)
	{
		ft_putchar((char)i);
		i++;
	}
}