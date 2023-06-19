/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_utils.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: neves <neves@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/27 11:37:09 by roda-min          #+#    #+#             */
/*   Updated: 2023/06/16 15:19:36 by neves            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../incs/ft_printf.h"

int	ft_putnbr_n(unsigned long int nb, const char *base)
{
	int	n;

	n = 0;
	if (nb >= (unsigned long int)ft_strlen(base))
		n += ft_putnbr_n(nb / ft_strlen(base), base);
	n += write(1, &base[nb % ft_strlen(base)], 1);
	return (n);
}
