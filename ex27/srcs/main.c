/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kpodgorn <kpodgorn@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/22 20:15:30 by kpodgorn          #+#    #+#             */
/*   Updated: 2026/10/22 20:15:33 by kpodgorn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft.h"
#include <fcntl.h>

int	main(int ac, char **av)
{
	char	buffer[32768];
	int		fd;

	if (ac == 1)
	{
		ft_putstr(2, "File name missing.\n");
		return (0);
	}
	if (ac > 2)
	{
		ft_putstr(2, "Too many arguments.\n");
		return (0);
	}
	fd = open(av[1], O_RDONLY);
	if (fd != 3)
	{
		ft_putstr(2, "Cannot read file.\n");
		return (0);
	}
	read(fd, buffer, 32768);
	ft_putstr(1, buffer);
	return (0);
}
