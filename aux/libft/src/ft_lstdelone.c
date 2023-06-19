/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: neves <neves@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/02 17:14:23 by roda-min          #+#    #+#             */
/*   Updated: 2023/06/16 15:02:24 by neves            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../libft/incs/libft.h"

void	ft_lstdelone(t_list *lst, void (*del)(void*))
{
	if (!(lst))
		return ;
	del(lst->content);
	free(lst);
}
