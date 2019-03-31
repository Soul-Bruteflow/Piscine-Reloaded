/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bruteflow <bruteflow@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/31 18:21:46 by bruteflow         #+#    #+#             */
/*   Updated: 2019/03/31 18:36:58 by bruteflow        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <fcntl.h>

void	ft_putchar_fd(int fd, char c);
void	ft_putstr_fd(char const *s, int fd);
void	ft_display_file(char *file_name);

int		main(int argc, char **argv)
{
	if (argc == 1)
		ft_putstr_fd("File name missing.\n", 2);
	else if (argc == 2)
		ft_display_file(argv[1]);
	else if (argc > 2)
		ft_putstr_fd("Too many arguments.\n", 2);
	return (0);
}

void	ft_putchar_fd(int fd, char c)
{
	write(fd, &c, 1);
}

void	ft_putstr_fd(char const *s, int fd)
{
	size_t	i;

	if (s)
	{
		i = 0;
		while (s[i] != '\0')
		{
			ft_putchar_fd(s[i], fd);
			i++;
		}
	}
}

void	ft_display_file(char *file_name)
{
	int		file;
	char	buf;

	file = open(file_name, O_RDONLY);
	while (read(file, &buf, 1) == 1)
	{
		write(1, &buf, 1);
	}
	close(file);
}