/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bruteflow <bruteflow@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/31 15:20:27 by bruteflow         #+#    #+#             */
/*   Updated: 2019/03/31 15:22:01 by bruteflow        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void				ft_putchar(char c);
void				ft_putstr(char *str);

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