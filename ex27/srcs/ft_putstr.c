/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kpodgorn <kpodgorn@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/22 20:14:56 by kpodgorn          #+#    #+#             */
/*   Updated: 2026/10/22 20:15:00 by kpodgorn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft.h"

void	ft_putstr(int output, char *str)
{
	int	i;

	i = -1;
	while (str[++i])
		ft_putchar(output, str[i]);
}
