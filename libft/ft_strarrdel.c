/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strarrdel.c                                     :+:    :+:            */
/*                                                     +:+                    */
/*   By: lravier <lravier@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/09/16 00:19:56 by kde-wint      #+#    #+#                 */
/*   Updated: 2020/10/26 14:51:41 by kim           ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

void		ft_strarrdel(char ***str)
{
	char	**ar;
	size_t	i;

	ar = *str;
	i = 0;
	while (ar[i] != NULL)
	{
		ft_strdel(&ar[i]);
		i++;
	}
	free(ar);
	ar = NULL;
}
