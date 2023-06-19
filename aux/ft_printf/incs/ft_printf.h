/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: neves <neves@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/27 11:37:18 by roda-min          #+#    #+#             */
/*   Updated: 2023/06/16 15:38:11 by neves            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <unistd.h>
# include <stdarg.h>
# include "../../libft/incs/libft.h"
// #include "../libft/libft/incs/libft.h"

int				ft_putnbr_n(unsigned long int nb, const char *base);

int				ft_printf_c(char c);
int				ft_printf_di(int nb);
int				ft_printf_p(unsigned long int c);
int				ft_printf_s(char *str);
int				ft_printf_u(unsigned int nb);
int				ft_printf_x(unsigned int c);
int				ft_printf_xx(unsigned int c);

int				ft_printf(const char *str, ...);
void			*ft_flags(char c);

#endif
