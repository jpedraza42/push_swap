/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpedraza < jpedraza@student.42malaga.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/05 14:54:26 by jpedraza          #+#    #+#             */
/*   Updated: 2026/05/05 16:12:22 by jpedraza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*new_lst;

	new_lst = (t_list *)malloc(sizeof(t_list));
	if (!new_lst)
		return (NULL);
	new_lst->content = content;
	new_lst->next = NULL;
	return (new_lst);
}
/*
int main(void)
{
	char 	*mensaje = "Esto es 42.";
	t_list 	*new_lst = ft_lstnew(mensaje);

	printf("Contenido del nuevo: %s\n", (char *)new_lst->content);
	if (new_lst->next == NULL)
		printf("Puntero al siguiente: NULL (Correcto)\n");
	else
		printf("Puntero al siguiente: Tiene basura o apunta a algo (Error)\n");
	free(new_lst);
	return (0);
}
*/
