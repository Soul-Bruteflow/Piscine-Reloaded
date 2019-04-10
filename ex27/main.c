/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvlad <mvlad@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/31 18:21:46 by bruteflow         #+#    #+#             */
/*   Updated: 2019/04/10 10:53:37 by mvlad            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <fcntl.h>
#include <unistd.h>

#define BUF_SIZE 4096

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *str)
{
	int index;

	index = 0;
	while (str[index] != '\0')
	{
		ft_putchar(str[index]);
		index++;
	}
}

int		main(int argc, char **argv)
{
	int		fd;
	int		ret;
	char	buf[BUF_SIZE + 1];

	if (argc < 2)
	{
		write(2, "No file name.\n", 19);
		return (1);
	}
	if (argc > 2)
	{
		write(2, "Too many arguments.\n", 20);
		return (1);
	}
	fd = open(argv[1], O_RDONLY);
	if (fd == -1)
		write(2, "Open() failed.\n", 14);
	ret = read(fd, buf, BUF_SIZE);
	buf[ret] = '\0';
	ft_putstr(buf);
	if (close(fd) == -1)
	{
		ft_putstr("close() failed\n");
	}
	return (0);
}
