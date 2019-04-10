/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvlad <mvlad@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/31 15:20:27 by bruteflow         #+#    #+#             */
/*   Updated: 2019/04/10 11:20:44 by mvlad            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void				ft_putchar(char c)
{
	write(1, &c, 1);
}

void				ft_putstr(char *s)
{
	unsigned long	i;

	if (s)
	{
		i = 0;
		while (s[i] != '\0')
		{
			ft_putchar(s[i]);
			i++;
		}
	}
}

int					main(int argc, char **argv)
{
	int				i;

	i = 1;
	while (i < argc)
	{
		ft_putstr(argv[i++]);
		ft_putchar('\n');
	}
}
