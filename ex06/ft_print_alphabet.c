/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alphabet.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvlad <mvlad@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/31 11:45:32 by bruteflow         #+#    #+#             */
/*   Updated: 2019/04/09 10:43:49 by mvlad            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void		ft_print_alphabet(void)
{
	short	i;

	i = 97;
	while (i <= 122)
	{
		ft_putchar((char)i);
		i++;
	}
}
