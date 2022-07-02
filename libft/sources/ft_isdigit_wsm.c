/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit_wsm.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gsever <gsever@student.42kocaeli.com.tr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/02 19:19:17 by gsever            #+#    #+#             */
/*   Updated: 2022/07/02 19:22:27 by gsever           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

//Checking char; is it number or space or '-' return 0.
int	ft_isdigit(int c)
{
	if ((c >= '0' && c <= '9') || c == ' ' || c == '-')
		return (0);
	return (1);
}
