/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bruteflow <bruteflow@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/31 15:55:25 by bruteflow         #+#    #+#             */
/*   Updated: 2019/03/31 16:04:49 by bruteflow        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void				ft_putchar(char c);
void				ft_putstr(char *str);
void				ft_swap(char **s1, char **s2);
int					ft_strcmp(char *s1, char *s2);
void				ft_sort_params(int ac, char **av);

int					main(int argc, char **argv)
{
	int				i;

	i = 1;
	ft_sort_params(argc, argv);
	while (i < argc)
	{
		ft_putstr(argv[i]);
		ft_putchar('\n');
		i++;
	}
	return (0);
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

void				ft_swap(char **s1, char **s2)
{
	char			*str;

	str = *s1;
	*s1 = *s2;
	*s2 = str;
}

int					ft_strcmp(char *s1, char *s2)
{
	unsigned long	i;
	int				reslt;
	char			*st_1;
	char			*st_2;

	i = 0;
	st_1 = (char*)s1;
	st_2 = (char*)s2;
	while (st_1[i] != '\0' && st_1[i] == st_2[i])
		i++;
	reslt = st_1[i] - st_2[i];
	return (reslt);
}

void				ft_sort_params(int ac, char **av)
{
	int		i;

	i = 1;
	while (i < ac - 1)
	{
		if (ft_strcmp(av[i], av[i + 1]) > 0)
		{
			ft_swap(&av[i], &av[i + 1]);
			i = 1;
		}
		else
			i++;
	}
}