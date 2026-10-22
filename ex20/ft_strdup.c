/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kpodgorn <kpodgorn@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/22 11:07:29 by kpodgorn          #+#    #+#             */
/*   Updated: 2026/10/22 12:16:58 by kpodgorn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>
#include <stdlib.h>

char	*ft_strdup(char *src)
{
	int		i;
	int		src_len;
	char	*dup_str;

	src_len = 0;
	while (src[src_len])
		src_len++;
	dup_str = (char *)malloc(sizeof(char) * (src_len + 1));
	if (!dup_str)
		return (NULL);
	i = 0;
	while (src[i])
	{
		dup_str[i] = src[i];
		i++;
	}
	dup_str[i] = '\0';
	return (dup_str);
}

// int main(void)
// {
// 	char	*source = "Hi there, you!";
// 	char	*duplicate = ft_strdup(source);
// 	printf("Duplicate message: %s\n", duplicate);
// 	free(duplicate);
// }