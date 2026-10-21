/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ft.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kpodgorn <kpodgorn@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/21 15:16:02 by kpodgorn          #+#    #+#             */
/*   Updated: 2026/10/21 15:18:45 by kpodgorn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>

void	ft_ft(int *nbr)
{
	if (!nbr)
		return ;
	*nbr = 42;
}

// int	main(void)
// {
// 	int	num;
// 	ft_ft(&num);
// 	printf("the value now is: %d\n", num);
// 	return(0);
// }