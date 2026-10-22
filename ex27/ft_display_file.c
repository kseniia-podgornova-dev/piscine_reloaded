/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_display_file.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kpodgorn <kpodgorn@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/22 20:16:47 by kpodgorn          #+#    #+#             */
/*   Updated: 2026/10/22 20:16:51 by kpodgorn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <fcntl.h>

#define BUF_SIZE 4096

static void	ft_putstr_err(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		write(2, &str[i], 1);
		i++;
	}
}

static void	display_file(char *filename)
{
	int		fd;
	int		bytes_read;
	char	buf[BUF_SIZE];

	fd = open(filename, O_RDONLY);
	if (fd < 0)
	{
		ft_putstr_err("Cannot read file.\n");
		return ;
	}
	bytes_read = read(fd, buf, BUF_SIZE);
	while (bytes_read > 0)
	{
		write(1, buf, bytes_read);
		bytes_read = read(fd, buf, BUF_SIZE);
	}
	if (bytes_read < 0)
		ft_putstr_err("Cannot read file.\n");
	close(fd);
}

int	main(int argc, char **argv)
{
	if (argc < 2)
		ft_putstr_err("File name missing.\n");
	else if (argc > 2)
		ft_putstr_err("Too many arguments.\n");
	else
		display_file(argv[1]);
	return (0);
}
